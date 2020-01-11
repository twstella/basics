#include <stdio.h>
#define Size 6
int visited[Size];
int Q[20];
int f=0,r=0;
void DFS(int n,char a[]){
	int l,r;
	if(n>Size)
		return;
	printf("%c ",a[n]);
	visited[n]=1;
	l=2*n+1;
	if((!visited[l])&&(l<Size))
		DFS(l,a);
	r=2*n+2;
	if((!visited[r])&&(r<Size))
		DFS(r,a);
	
}
int isEmpty(){
	if(f==r)
		return 1;
	else
		return 0;
}

void entQue(int n){
	Q[r++]=n;
}
int delQue(){
	int k;
	k=Q[f];
	f++;
	return k;
}

void showQue() {
	int i;
	
	for (i=f; i<r; i++)
		printf("%d-", Q[i]);
	printf("\n");
}

void BFS(char a[]){
	int l,r,e;
	entQue(0);

	while(isEmpty()!=1){
		e=delQue();
		printf("%c ",a[e]);
		getchar();
		l=2*e+1;
		r=2*e+2;
		if(l<Size)
			entQue(l);
		if(r<Size)
			entQue(r);
		showQue();
		getchar();
	}
	
}
main(){
	
	char a[Size]={'A','B','C','D','E','F'};

/*	
	DFS(0,a);
	printf("\n");
	BFS(a);

	entQue(3);
	printf("%d %d\n", f, r);
	showQue();
	entQue(4);
	printf("%d %d\n", f, r);
	showQue();
	printf("%d\n", delQue());
	showQue();
	*/	
	BFS(a);
}
