#include <stdio.h>
#define Size 8
int path[8][8]={{0,1,1,0,0,0,0,0},
				{1,0,0,1,0,0,0,0},
				{1,0,0,1,0,0,0,0},
				{0,1,1,0,1,0,0,0},
				{0,0,0,1,0,0,0,0},
				{0,0,0,0,0,0,0,1},
				{0,0,0,0,0,0,0,1},
				{0,0,0,0,0,1,1,0}};
				
int visited[8]={0,};
int count=0;
/*
void DFS(int i){
	int k;
	printf("%d ",i);
	for(k=0;k<8;k++){
		if((path[i][k]==1)&&(visited[k]==0)){
			visited[k]=1;
			
			//printf("-%d",k);
			DFS(k);
		}
		
	}
	
	
}


void BFS(){
	int e,i;
		
	entQue(0);
	while(isEmpty()!=1){
		e=delQue();
		for(i=0;i<7;i++){
			if((path[e][i]==1)&&(visited[i]==0)){
				entQue(i);
				visited[i]=1;
			}
		}
		printf("%d ",e);
		//getchar();

		//showQue();
		//getchar();
	}
	
}
*/

int Q[20];
int f=0,r=0;

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

void showQue() {
	int i;
	
	for (i=f; i<r; i++)
		printf("%d", Q[i]);
	printf("\n");
}
void countP(){
	int e,i,j;

	for(i=0;i<8;i++){
		if(visited[i]==1)
			continue;
			printf("%d ",i);
		entQue(i);
		while(isEmpty()!=1){
			e=delQue();
			for(j=0;j<8;j++){
				if((path[e][j]==1)&&(visited[j]==0)){
					entQue(j);
					visited[j]=1;
				}
			}
		}
		count++;
	}
	printf("%d ",count);
}
	
/*
void BFS(){
	int e,i;
		
	entQue(0);
	while(isEmpty()!=1){
		e=delQue();
		for(i=0;i<8;i++){
			if((path[e][i]==1)&&(visited[i]==0)){
				entQue(i);
				visited[i]=1;
			}
		}
		printf("%d ",e);
	}
	
}
*/
main(){
	//]visited[0]=1;
	
	//DFS(0);
	//BFS();
	countP();
}
