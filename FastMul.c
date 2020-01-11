#include <stdio.h>
void dumpMat(double e[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%8.2lf",e[i][j]);
		printf("\n");
	}
	printf("\n");
}

void copyMat(double m1[3][3],double m2[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			m2[i][j]=m1[i][j];
}

void mulMat(double m1[3][3],double m2[3][3],double m3[3][3]){
	int i,j,k;
	double sum;
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			sum=0.0;
			for(k=0;k<3;k++){
				sum+=m1[i][k]*m2[k][j];
			
			}
			m3[i][j]=sum;	
		}
	}
	
}


main(){
	double a[3][3]={{0.1,1.02,0.11},{1,0.3,0.02},{0.1,0.01,0.11}};
	double b[3][3]={{0.1,1.02,0.11},{1,0.3,0.02},{0.1,0.01,0.11}};
//	double b[3][3]={{1.01,0.2,0.01},{0.1,0,0.02},{0.01,0.1,0.11}};
	double c[3][3]={{0.1,1.02,0.11},{1,0.3,0.02},{0.1,0.01,0.11}};;
	double d[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	double e[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	int i,l=19;
/*
	dumpMat(a);
	dumpMat(b);
	copyMat(a,c);
	

	for(l=0;l<4;l++){
		mulMat(a,a,b);
		copyMat(b,a);
	}
	dumpMat(a);
	mulMat(a,c,d);
	mulMat(d,c,a);
	mulMat(a,c,d);
	copyMat(d,a);
	dumpMat(a);
*/
/*
	mulMat(a,b,d);
	dumpMat(d);
	mulMat(a,a,d);
	dumpMat(d);
	mulMat(a,a,d);
	copyMat(d,a);
	dumpMat(a);
	
*/
	while (l) {
		if ( l% 2){ 
			//printf("1");
			mulMat(d,a,b);
			copyMat(b,d);

			
		}

		l = l>>1;
			mulMat(a,a,b);
			copyMat(b,a);//b=b*b
	}
	dumpMat(d);
	for(i=0;i<19;i++){
		mulMat(e,c,d);
		copyMat(d,e);
	}
	dumpMat(e);

}
