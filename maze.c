#include <stdio.h>
int visited[5][6]={0,};
int Q[20];
int f=0,r=0;
int count=0;
int maze[5][6]={{0,0,0,1,0,0},
				{0,0,1,0,1,0},
				{0,1,1,0,1,1},
				{0,1,0,0,0,0},
				{0,1,1,0,0,0}};
int isEmpty(){
	if(f==r)
		return 1;
	else
		return 0;
}

void entQue(int n){
	Q[r++]=n;
}
int delQue(){
	int k;
	k=Q[f];
	f++;
	return k;
}

void showQue(){
	int i;
	
	for (i=f; i<r; i++)
		printf("%d-", Q[i]);
	printf("\n");
}
void countP(){
	int i,j,u,x,y;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			if((visited[i][j]==1)||(maze[i][j]==1))
				continue;
printf("Found %d %d \n", i, j);
			entQue(10*i+j);
printf("Enque %d\n", 10*i+j);
			visited[i][j]=1;
			while(!isEmpty()){
				u=delQue();
				x=u/10;
				y=u%10;
printf("Popped %d %d\n", x, y);
				if(x-1>=0){
					if ((maze[x-1][y]==0)&&(visited[x-1][y]==0)){
					entQue((x-1)*10+y);
					visited[x-1][y]=1;
					}
				}
				if(x+1<=5){
					if((maze[x+1][y]==0)&&(visited[x+1][y]==0)){
						entQue((x+1)*10+y);
						visited[x+1][y]=1;
					}
				}
				if(y-1>=0){
					if((maze[x][y-1]==0)&&(visited[x][y-1]==0)){
						entQue(x*10+(y-1));
						visited[x][y-1]=1;
					}
				}
				if(y+1<=6){
					if((maze[x][y+1]==0)&&(visited[x][y+1]==0)){
						entQue(x*10+(y+1));
						visited[x][y+1]=1;
					}
				}		
showQue();
getchar();
			}
			count++;		
		}
			
	}
	printf("%d ",count);
}
main(){
	countP();
}
