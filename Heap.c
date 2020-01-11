#include <stdio.h>
int heap[7];
int size=7;
int nEle=0;
void swap(int* a,int* b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void heapify(int k){
	int c,p;
	
	if(nEle==0);
		heap[nEle]=k;
	c=nEle;
	nEle++;	
	heap[c]=k;
	while(c>0){
		p=(c-1)/2;		
		if(heap[p]<heap[c]){
			swap(&heap[p],&heap[c]);
		}
		else
			break;
		c=p;
	}
}
void printHeap(){
	int i;
	for(i=0;i<nEle;i++)
		printf("%d ",heap[i]);
	printf("\n");
}

void delHeap(){
	int n=0,l,r,k;
	int m;
	k=nEle-1;
	heap[0]=heap[k];
	nEle--;
	while(n<nEle){
		l=2*n+1;
		r=2*n+2;
		if(heap[l]>heap[r])
			m=l;
		else
			m=r;
		
		if(heap[n]<heap[m])
			swap(&heap[n],&heap[m]);
		else
			break;
		n=m;
	}
}
void inorder(int n){
	int l,r;
	l=2*n+1;
	r=2*n+2;
	if(n>=size)
		return;
	inorder(l);
	printf("%d ",heap[n]);
	inorder(r);
}
void preorder(int n){
	int l,r;
	l=2*n+1;
	r=2*n+2;	
	if(n>=size)
		return;
	printf("%d ",heap[n]);
	preorder(l);
	preorder(r);
}
void postorder(int n){
	int l,r;
	l=2*n+1;
	r=2*n+2;
	if(n>=size)
		return;
	postorder(l);
	postorder(r);
	printf("%d ",heap[n]);
}
main(){
	int i;
	int arr[7]={6,5,4,7,8,3,1};
	for(i=0;i<size;i++)
		heapify(arr[i]);
	printHeap();

	/*
	delHeap();
	printHeap();
	*/

	inorder(0);
	printf("\n");
	preorder(0);
	printf("\n");
	postorder(0);
	printf("\n");
}
		
