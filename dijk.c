#include <stdio.h>
int from[7]={0,};
int path[7][7]={{0,2,3,99,99,99,99},
				{2,0,1,99,3,99,5},
				{2,1,0,99,99,2,99},
				{99,99,99,0,99,2,3},
				{99,3,99,99,0,1,5},
				{99,99,2,2,1,0,99},
				{99,5,99,3,5,99,99}};
int cost[7]={99,99,99,99,99,99,99};
int see;
int price[7][7]={0,};
int visited[7]={0,};
int min(int n){
	int i,min=99,l;
		for(i=0;i<7;i++){
			if((price[n][i]<min)&&(visited[i]==0)){
				min=price[n][i];
				l=i;
			}
		}
		return l;
}
void showCost(){
	int i;
	printf("cost:");
	for(i=0;i<7;i++)
		printf("%d ",cost[i]);
	printf("\n");
}
void printPrice(int n){
	int i;
	printf("price:");
	for(i=0;i<7;i++)
		printf("%d ",price[n][i]);
	printf("\n");
}
void findCost(int n){
	int i,j,k,l;
	cost[n]=0;
	visited[n]=1;
		for(i=0;i<7;i++){
			price[0][i]=path[n][i];
			if(path[n][i]<99)
				cost[i]=path[n][i];
		}
printPrice(0);
		j=min(0);
		visited[j]=1;
		cost[j]=price[0][j];
		showCost();
printf("mini:%d ",j);
printf("\n");

	
		for(i=0;i<7;i++){
			if((path[j][i]+cost[j]<cost[i])&&(visited[i]==0)){
				price[1][i]=path[j][i]+cost[j];
			//	printf("%d ",i);
			from[i]=j;
			}
			else
				price[1][i]=price[0][i];
		}
printPrice(1);	
		j=min(1);
		visited[j]=1;
		cost[j]=price[1][j];
		showCost();
printf("mini:%d ",j);
printf("\n");

for(i=0;i<7;i++){
			if((path[j][i]+cost[j]<price[1][i])&&(visited[i]==0)){
				price[2][i]=path[j][i]+cost[j];
			//	printf("%d ",i);
			from[i]=j;
			}
			else
				price[2][i]=price[1][i];
		}
printPrice(2);	
		j=min(2);
		visited[j]=1;
		cost[j]=price[2][j];
		showCost();
printf("mini:%d ",j);
printf("\n");

for(i=0;i<7;i++){
			if((path[j][i]+cost[j]<price[2][i])&&(visited[i]==0)){
				price[3][i]=path[j][i]+cost[j];
			//	printf("%d ",i);
			from[i]=j;
			}
			else
				price[3][i]=price[2][i];
		}
printPrice(3);	
		j=min(3);
		visited[j]=1;
		cost[j]=price[3][j];
		showCost();
printf("mini:%d ",j);
printf("\n");

for(i=0;i<7;i++){
			if((path[j][i]+cost[j]<price[3][i])&&(visited[i]==0)){
				price[4][i]=path[j][i]+cost[j];
			//	printf("%d ",i);
			from[i]=j;
			}
			else
				price[4][i]=price[3][i];
		}
printPrice(4);	
		j=min(4);
		visited[j]=1;
		cost[j]=price[4][j];
		showCost();
printf("mini:%d ",j);
printf("\n");	

for(i=0;i<7;i++){
			if((path[j][i]+cost[j]<price[4][i])&&(visited[i]==0)){
				price[5][i]=path[j][i]+cost[j];
			//	printf("%d ",i);
			from[i]=j;
			}
			else
				price[5][i]=price[4][i];
		}
printPrice(5);	
		j=min(5);
		visited[j]=1;
		cost[j]=price[5][j];
		showCost();
printf("mini:%d ",j);
printf("\n");	
}
printFrom(int f,int t){
	//int i;
	printf("%d ",f);
	while(f!=t){
	
	f=from[f];
	printf("%d ",f);
	}
	printf("\n");
}
main(){
	findCost(0);
	printf("-----------------------------------------------\n");
	showCost();
	printFrom(3,0);
}
	
