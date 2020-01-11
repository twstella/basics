#include <stdio.h>

main(){
	int s=1,b=2;
	int l=19;
		while (l) {
		if ( l% 2){ 
			//printf("1");
				s=s*b;
				
		}

		l = l>>1;
		b=b*b;
		}
	printf("%d",s);
}
