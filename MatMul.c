#include <stdio.h>
void dumpMat(int e[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%3d",e[i][j]);
		printf("\n");
	}
	printf("\n\n");
}
void printMat(float e[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%3d",e[i][j]);
		printf("\n");
	}
	printf("\n\n");
}
int rowCol(int m1[3][3],int m2[3][3],int i,int j){
	int k,sum=0;
	
	for(k=0;k<3;k++)
		sum+=m1[i][k]*m2[k][j];
	return sum;
}
void copyMat(int m1[3][3],int m2[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			m2[i][j]=m1[i][j];
}
void mulMat(int m1[3][3],int m2[3][3],int m3[3][3]){
	int i,j,k,sum;
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			sum=0;
			for(k=0;k<3;k++){
				sum+=m1[i][k]*m2[k][j];
			
			}
			m3[i][j]=sum;	
		}
		
		
	}
	
}

main(){
	int a[3][3]={{1,2,1},{0,3,2},{1,1,1}};
	int b[3][3]={{2,1,6},{3,1,3},{1,4,1}};
	int c[3][3];
	
	dumpMat(a);
	dumpMat(b);
	/*
	printf("%3d",rowCol(a,b,0,0));
	printf("%3d",rowCol(a,b,0,1));
	printf("%3d",rowCol(a,b,0,2));
	printf("\n");
	printf("%3d",rowCol(a,b,1,0));
	printf("%3d",rowCol(a,b,1,1));
	printf("%3d",rowCol(a,b,1,2));
	printf("\n");
	printf("%3d",rowCol(a,b,2,0));
	printf("%3d",rowCol(a,b,2,1));
	printf("%3d",rowCol(a,b,2,2));
	printf("\n\n");	
	*/
	/*
	mulMat(a,b,c);
	dumpMat(c);
	mulMat(a,a,c);
	copyMat(c,a);
	dumpMat(a);
	*/
	//power16(m1,m2);
	//printMat(m2);
	/*
	mulMat(m1,m1,m2);
	copyMat(m2,m1);
	dumpMat(m2);
	*/
	mulMat(a,b,c);
	dumpMat(c);
}
