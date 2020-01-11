#include <stdio.h>

int path[7][7]={{0,2,3,99,99,99,99},
				{2,0,1,99,3,99,5},
				{2,1,0,99,99,2,99},
				{99,99,99,0,99,2,3},
				{99,3,99,99,0,1,5},
				{99,99,2,2,1,0,99},
				{99,5,99,3,5,99,0}};
int visited[7]={0,};
int cost[7]={99,99,99,99,99,99,99};
int from[7]={0,};
int minI(){
	int l,i,min=99;
		for(i=0;i<7;i++){
			if((cost[i]<min)&&(visited[i]==0)){
				min=cost[i];
				l=i;
			}
		}
		return l;
}

void showVisited(){
	int i;
	printf("visited:");
	for(i=0;i<7;i++)
		printf("%d ",visited[i]);
	printf("\n");
}
void showCost(){
	int i;
	printf("cost:");
	for(i=0;i<7;i++)
		printf("%d ",cost[i]);
	printf("\n");
}
void findCost(int n){
	int i,j,k;
	
	visited[n]=1;
	for(i=0;i<7;i++){
		cost[i]=path[n][i];
	}


	for(i=1;i<7;i++){
		j=minI();
	
		visited[j]=1;

		for(k=0;k<7;k++){
			if((cost[k]>cost[j]+path[j][k])&&(visited[k]==0)){
				cost[k]=cost[j]+path[j][k];
				from[k]=j;
			}
		}
	}
	showCost();
}
void printPath(int n){
	printf("%d ",n);
	while(n!=0){
		n=from[n];
		printf("%d ",n);
	}
}
void printFrom(){
	int i;
	for(i=0;i<7;i++)
		printf("%d ",from[i]);
	printf("\n");
}
main(){
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++)
			printf("%d ",path[i][j]);
		printf("\n");
	}
	printf("-----------------------------------------\n");
	findCost(0);
	printFrom();
	printPath(3);
}
