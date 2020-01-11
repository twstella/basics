#include <stdio.h>
int maze[6][6]={{0,0,0,0,0,1},
				{0,1,0,1,0,0},
				{0,1,1,1,0,1},
				{0,1,0,0,0,0},
				{1,1,1,1,1,1}};
				
int visited[6][6]={0,};
struct t_stack{
	int x;
	int y;
};
struct t_stack stack[30];
int top=0;
int isEmpty(){
	if(top==0)
		return 1;
	else
		return 0;
}
void push(int x,int y){
	stack[top].x=x;
	stack[top].y=y;
}
void pop(int* x,int* y){
	top--;
	*x=stack[top].x;
	*y=stack[top].y;
	return;
}

/*
int stack[6];
int top=0;
void push(int n){
	stack[top++]=n;
}
int pop(){
	return stack[--top];
}
int isEmpty(){
	if(top==0)
		return 1;
	else
		return 0;
}
void showStack(){
	int i;
	for(i=0;i<top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}
*/
int findOut(){
	int i,j,x,y,s;
	for(i=0;i<6;i++){
		if((maze[0][i]==0)&&(visited[0][i]==0)){
			push(0,i);
			visited[0][i]=1;
			while(!isEmpty()){
				pop(&x,&y);
				//x=j/10;
				//y=j%10;
				if(x-1>=0){
					if((maze[x-1][y]==0)&&(visited[x-1][y]==0)){
						push((x-1),y);
						visited[x-1][y]=1;
					}
				}
				if(x+1<=6){
					if((maze[x+1][y]==0)&&(visited[x+1][y]==0)){
						push((x+1),y);
						visited[x+1][y]=1;
						if(x+1==6)
							s=1;
						else
							s=0;
							
					}
				}
				if(y-1>=0){
					if((maze[x][y-1]==0)&&(visited[x][y-1]==0)){
						push(x,(y-1));
						visited[x][y-1]=1;
					}
				}
				if(y+1<=6){
					if((maze[x][y+1]==0)&&(visited[x][y+1]==0)){
						push(x,(y+1));
						visited[x][y+1]=1;
					}
				}
			}
		}
	}
	return s;
}
void isTrue(int s){
	if(s==0)
		printf("No");
	else
		printf("Yes");
}
main(){
int s;
s=findOut();
isTrue(s);
}
