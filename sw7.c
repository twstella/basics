#include <stdio.h>

int top=0;
int visited[5][6]={0};
struct t_stack{
	int x,y;
}stack[20];
void push(struct t_stack t){
	stack[top++]=t;
}
struct t_stack pop(){
	struct t_stack t;
	t=stack[top-1];
	top--;
	return t;
}
int isEmpty(){
	if(top==0)
		return 1;
	else
		return 0;
}

int valid (int x, int y) {
	if
void func(int a[][6]){
	int i,j=0;
	struct t_stack u, t;
	int x, y;
	
	for(i=0;i<6;i++){
		if((a[i][j]==0)&&(visited[i][j]==0)){
			u.x=i;
			u.y=j;
			push(u);
			visited[i][j]=1;
		}
		else 
			continue;
		while(!isEmpty()) {
			u= pop();
			
			x = u.x; y =u.y;
			
			if((a[x-1][y]==0)&&(visited[x-1][y]==0) & Valid(x-1, y)){
				t.x = x-1; t.y = y;
				push(t);
				visited[x-1][y]=1;
			}

			if((a[i+1][j]==0)&&(visited[i+1][j]==0)){
				u.x=i+1;
				u.y=j;
				push(u);
				i++;
				visited[i][j]=1;
			}
		
		if((a[i][j-1]==0)&&(visited[i][j-1]==0)){
			u.x=i;
			u.y=j-1;
			push(u);
			j--;
			visited[i][j]=1;
		}
	
		if((a[i][j+1]==0)&&(visited[i][j+1]==0)){
			u.x=i;
			u.y=j+1;
			push(u);
			j++;
			visited[i][j]=1;
		}
	}
}
main(){
	struct t_stack u;
	u.x=1;
	u.y=2;
	push(u);
	u.x=3;
	u.y=7;
	push(u);
	u=pop();
	printf("%d %d\n",u.x,u.y);
	u=pop();
	printf("%d %d\n",u.x,u.y);
}
