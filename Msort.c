#include <stdio.h>
#define M 100000

int a1[M/2+1],a2[M/2+1];
	
void showMat(int a[]){
	int i;
	for(i=0;i<M;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void msort(int a[],int f,int t){
	int m=(f+t)/2;

	int i=0,j=0,x=0;
	int cnt1=0,cnt2=0;
	//printf("%d %d\n",f,t);
	//getchar();
	if(f==t)
		return;
	msort(a,f,m);
	msort(a,m+1,t);
	for(x=f;x<=m;x++)
		a1[i++]=a[x];
	for(x=m+1;x<=t;x++)
		a2[j++]=a[x];
	cnt1=m-f+1;
	cnt2=t-m;
	i=0;
	j=0;
	x=f;
	while(i<cnt1&&j<cnt2){
		if(a1[i]<a2[j]){
			a[x]=a1[i];
			x++;
			i++;
		}
		else{
			a[x]=a2[j];
			x++;
			j++;
		}
	}
	while(i<cnt1){
		a[x]=a1[i];
		x++;
		i++;
	}
	while(j<cnt2){
		a[x]=a2[j];
		x++;
		j++;
	}
	//printf("%d %d\n",f,t);
	//showMat(a);
	//getchar();
}
void selsort(int a[]){
	int i,j,tmp;
	int mindex=0;
	for(i=0;i<M;i++){
		mindex=i;
		for(j=i+1;j<M;j++){
			if(a[mindex]>a[j]){
			
				mindex=j;
			}
		}
		
		tmp=a[mindex];
		a[mindex]=a[i];
		a[i]=tmp;
	
	}
}

			
			
			
main(){
	int i;
	//int a[M]={3,1,8,4,7,6,2,10,9,5};
	int a[M];
	int x;
	getchar();
	for(i=0;i<M;i++)
		a[i]=rand()%100;
	msort(a,0,M-1);
	printf("done\n");
	getchar();
	for(i=0;i<M;i++)
		a[i]=rand()%100;
	selsort(a);
	printf("done\n");
//	showMat(a);
}
