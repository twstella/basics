#define Len 10
#include <stdio.h>
/*
#include <stdio.h>
#define Len 10
main(){
	int i,j;
	for(i=0;i<Len;i++){
		for(j=0;j<3;j++)
			printf(" ");
			printf("*");
			printf("\n");
		
	}
}
*/
/*
#include <stdio.h>
#define Len 10
main(){
	int i,j;
	for(i=0;i<Len;i++){
		for(j=0;j<i;j++)
			printf(" ");
			printf("*");
			printf("\n");
		
	}
}
*/
/*
#define Len 10
#include <stdio.h>
main(){
	int i,j,k;
	for(i=0;i<Len;i++){
		for(j=Len;j>i;j--)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("*");
		for(k=0;k<i;k++)
			printf("*");
		printf("\n");
	}
}
*/
/*
main(){
	int i,j;
	for(i=0;i<Len;i++){
		for(j=0;j<i;j++)
			printf("*");
			printf("\n");
		
	}
	for(i=0;i<Len;i++){
		for(j=Len;j>i;j--)
			printf("*");
			printf("\n");
		
	}
}
*/
/*
void dumpMat(int e[3][3]){
	int i,j;
	int sum=0;
	int max=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ",e[i][j]);
			sum+=e[i][j];
			if(max<e[i][j])
				max=e[i][j];
		}
		printf("\n");
	}
	printf("sum: %d ",sum);
	printf("\n max: %d",max);
	return;
}
main(){
	int a[3][3]={{1,2,1},{0,2,3},{1,1,1}};
	
	dumpMat(a);
}
*/
/*
void dumpMat(int e[4][4]){
	int i,j,sum;
	int max;
	for(i=0;i<4;i++){
		sum=0;
		max=0;
		for(j=0;j<4;j++){
			printf("%2d",e[i][j]);
			sum=sum+e[i][j];
			if(max<e[i][j])
				max=e[i][j];
		}
		printf(" sum: %2d",sum);
		printf(" max: %2d\n",max);
	}
	return;
}
main(){
	int a[4][4]={{1,2,1,5},{0,2,3,1},{1,1,1,3},{2,1,3,1}};
	dumpMat(a);
}
*/
/*
void dumpMat(int e[4][4]){
	int i,j,sum;
	int max;
	for(j=0;j<4;j++){
		sum=0;
		max=0;
		for(i=0;i<4;i++){
			printf("%2d",e[j][i]);
			sum=sum+e[i][j];
			if(max<e[i][j])
				max=e[i][j];
		}
		printf(" sum: %2d",sum);
		printf(" max: %2d\n",max);
	}
	return;
}
main(){
	int a[4][4]={{1,2,1,5},{0,2,3,1},{1,1,1,3},{2,1,3,1}};
	dumpMat(a);
}
*/
/*
void filterMat(int e[3][3]){
	int i,j;
	int sum1=0,sum2=0,sum3=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d",e[i][j]);
			if(i<j){
				sum1+=e[i][j];
				
			}
			
	
			
			else if(i>j){
				sum2+=e[i][j];
		
			}
		
			else if(i==j){
				sum3+=e[i][j];
	
			}
	
			
		}
		printf("\n");

	}

	printf("lower:%d\n",sum1);
	printf("upper:%d\n",sum2);
	printf("center:%d",sum3);
	
}
main(){
	int a[3][3]={{1,2,1},{0,2,3},{1,1,1}};
	
	filterMat(a);
}
*/
/*
void dumpMat(int e[3][3]){
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ",e[j][i]);

		}
		printf("\n");
	}

	return;
}
void updateMat(int e[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		if(i>j)
		e[i][j]=0;
	}
	return;
}
main(){
	int a[3][3]={{1,2,1},{0,2,3},{1,1,1}};

	updateMat(a);
	dumpMat(a);	
}
*/
void dumpMat(int e[3][3]){
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d ",e[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	return;
}
void delMat(int m1[3][3],int m2[3][3],int m3[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			m3[i][j]=m1[i][j]-m2[i][j];
		//	printf("%d ",m3[i][j]);
		}
}
void addMat(int m1[3][3],int m2[3][3],int m3[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		//	printf("%d ",m3[i][j]);
		}
}
main(){
	int a[3][3]={{1,2,1},{0,2,3},{1,1,1}};
	int b[3][3]={{2,1,6},{3,1,3},{1,4,1}};
	int c[3][3];
	addMat(a,a,a);
	dumpMat(a);
	dumpMat(b);	
	dumpMat(c);

	/*
	delMat(a,b,c);
	dumpMat(a);
	printf("\n");
	dumpMat(b);
	printf("\n");	
	dumpMat(c);
	*/
}
