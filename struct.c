#include <stdio.h>
struct t_stack{
	int x;
	int y;
};
struct t_stack stack[30];
int top=0;
void push(int x,int y){
	stack[top].x=x;
	stack[top].y=y;
	top++;
}
void pop(int* x,int* y){
	top--;
	*x=stack[top].x;
	*y=stack[top].y;
	return;
}

main(){
	int x,y;
	push(3,4);
	push(5,6);
	pop(&x,&y);
	printf("%d %d\n",x,y);
	pop(&x,&y);
	printf("%d %d\n",x,y);
}
