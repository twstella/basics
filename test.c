#include <stdio.h>
#define M 10
int a1[M/2+1],a2[M/2+1];
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
}
int findMax(int l[]){
	int i,max=-1;
	for(i=0;i<4;i++){
		if(max<l[i])
			max=l[i];
	}
	return max;
}
void showMat(int a[]){
	int i;
	for(i=0;i<M;i++)
		printf("%d ",a[i]);
	printf("\n");
}
main(){
	int a[M],l[4];
	int i;
	for(i=0;i<M;i++)
		a[i]=(rand()%1001)-500;
	msort(a,0,M);
	showMat(a);
	printf("\n");
	l[0]=a[0]*a[1];
	l[1]=a[M-2]*a[M-1];
	l[2]=a[M-3]*a[M-2]*a[M-1];
	l[3]=a[0]*a[1]*a[M-1];
	printf("max= %d",findMax(l));
}
