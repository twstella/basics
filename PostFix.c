#define Max 30
#include <stdio.h>
char stack[Max];
int top=0;

int isOperator(char o){
	if((o=='+')||(o=='-')||(o=='*')||(o=='/')||(o=='(')||(o==')'))
		return 1;
	else
		return 0;
}
char peek(){
	return stack[top-1];
}

int isFull(){
	if(top==Max)
		return 1;
	else
		return 0;
}
int isEmpty(){
	if(top==0)
		return 1;
	else
		return 0;
}
void push(int item){
	
	if(isFull() !=1)
		stack[top++]=item;
	else
		printf("Stack is full\n");
}
char pop(){
	if(isEmpty()!=1)
		return stack[--top];
	else{
		printf("stack empty\n");
		return -1;
	}
}
int icp(char s){
	if((s=='+')||(s=='-'))
		return 1;
	if((s=='*')||(s=='/'))
		return 2;
	if(s=='(')
		return 3;
	
}
int isp(char s){
	if((s=='+')||(s=='-'))
		return 1;
	if((s=='*')||(s=='/'))
		return 2;	
	if(s=='(')
		return 0;	
}

void showStack(){
	int i;
	for(i=0;i<top;i++)
		printf("stack: %c ",stack[i]);
	printf("\n");
}

main(){
	char s[Max];
	int i=0;
	int k;
	int j;
	
//	gets(s);
strcpy(s,"(a+b*c+(d+e)*f)+(k+l)+5");
	while(s[i]!=0){
//printf("Seeing %c\n", s[i]);
		if(isOperator(s[i])==0){
			printf("%c",s[i]);
			i++;
			continue;
		}
		if(isEmpty()==1){
				push(s[i]);
				i++;
//showStack();				
				continue;
			}
		

//showStack();
			if(s[i]==')'){
				while(1){
					k=peek();
					if(k!='(')
						printf("%c",pop());
					else {
						pop();
						break;
					}
				}
				i++;
				continue;
			}
			while(1){
				if(isEmpty()==1)
					break;
				k=peek();
				if(isp(k) >= icp(s[i]))
					printf("%c",pop());
				else {

					break;
				}
			}
			push(s[i]);
			i++;
//showStack();			
			continue;
					
		}
	while(1){
		if(isEmpty()==1)
			break;
		printf("%c",pop());
	}
		
	
}

