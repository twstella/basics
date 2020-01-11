#include <stdio.h>
int cnt=0;
void move(char from,char mid,char to,int n){

	if(n==1){
		//move(from,mid,to,1);
//			printf("move from %c",from);
//			printf(" to %c\n",to);
			cnt++;
			
		}
		
	else{
		move(from,to,mid,n-1);
		move(from,mid,to,1);		
		move(mid,from,to,n-1);

	}
}
int count(int n){
	if(n==1)
		return 1;
	else
		return (2*count(n-1)+1);
}
main(){
	move('A','C','B',100);
	printf("%d",cnt);
//	printf("%d",count(5));
}
