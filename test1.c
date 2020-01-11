#include <stdio.h>
int max1[3]={0};
int max2[5]={0};
int findMax(int a[][5]){
	int i,j,c=0,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(max1[i]<a[i][j])
				max1[i]=a[i][j];
		}
		sum+=max1[i];

	}

	for(j=0;j<5;j++){
		for(i=0;i<3;i++){
			if(max2[j]<a[i][j])
				max2[j]=a[i][j];
		}
		sum+=max2[j];
	
	}

	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			if(max1[i]==max2[j])
				c+=max1[i];
	}
				
	sum-=c;

	return sum;
}
	
	
main(){
	
	int i,j,sum=0,m,n;
//	int a[4][4]={{1,2,4,6},{16,9,13,11},{5,10,8,15},{12,14,7,3}};
	int a[3][5]={{1,11,25,20,23},{17,2,16,21,15},{10,3,12,24,22}};
	m=findMax(a);
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			sum+=a[i][j];
	n=sum-m;
	printf("%d ",n);
}
		
