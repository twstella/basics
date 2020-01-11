#include <stdio.h>
void dumpMat(int e[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%10d",e[i][j]);
		printf("\n");
	}
	printf("\n");
}

void copyMat(int m1[2][2],int m2[2][2]){
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			m2[i][j]=m1[i][j];
}

void mulMat(int m1[2][2],int m2[2][2],int m3[2][2]){
	int i,j,k;
	int sum;
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<2;k++){
				sum+=m1[i][k]*m2[k][j];
			
			}
			m3[i][j]=sum;	
		}
	}
	
}
int fibo(int n){
	if(n==0) return 1;
	else if(n==1) return 1;
	else return(fibo(n-1)+fibo(n-2));
}
void cibo(int l){
	int a[2][2]={{1,1},{1,0}};
	int b[2][2];
	int c[2][2]={{1,0},{0,1}};

		while (l) {
		if ( l% 2){ 
			//printf("1");
			mulMat(c,a,b);
			copyMat(b,c);//c=c*a

			
		}

		l = l>>1;
			mulMat(a,a,b);
			copyMat(b,a);//a=a*a
		dumpMat(c);
		printf("---------------------------------------\n");
	}
	dumpMat(c);
	
}
main(){
	
	int i,j;
	cibo(5);

	i=fibo(5);
	printf("%d\n",i);
}
	
	
