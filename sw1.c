#include <stdio.h>

/* print according to the given format info. 

main (){
	int i;
	char s[10];
	
	gets(s);
	printf("%s\n",s);
	
	for(i=0;i<10;i++)
		printf("%d %x %c\n",s[i],s[i],s[i]);
}
*/

/* count the length of a string
main (){
	int i;
	char s[10];
	int count=0;
	gets(s);

	for(i=0;i<10;i++){
		if(s[i]==0)
			break;
		count++;
	}
	printf("%d\n",count);
}
*/

/* filters upper-case letters
main(){
int i,count=0;
char s[30];

gets(s);
for(i=0;i<strlen(s);i++)
	if((s[i]>='A')&&(s[i]<='Z'))
		printf("%c",s[i]);
}
*/
/* filter lower-case
main(){
int i,count=0;
char s[30];

gets(s);
for(i=0;i<strlen(s);i++)
	if((s[i]>='a')&&(s[i]<='z'))
		printf("%c",s[i]);
}
*/
/* numbers of capital letter
main(){
	int i;
	int count=0;
	char s[30];

	gets(s);
	for(i=0;i<strlen(s);i++)
		if((s[i]>='A')&&(s[i]<='Z'))
			count++;
	printf("%d",count);
}
*/
/* print lower-case or upper-case
main(){
	int i;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++)
		if(((s[i]>='A')&&(s[i]<='Z'))||((s[i]>='a')&&(s[i]<='z')))
			printf("%c",s[i]);
}
*/
/*counting lower-case, upper-case number
main(){
	int i,capital=0,miniscule=0,exp=0;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++){
		if((s[i]>='A')&&(s[i]<='Z'))
			capital++;
		else if((s[i]>='a')&&(s[i]<='z'))
			miniscule++;
		else
			exp++;
	}	
	printf("%d %d %d\n",capital,miniscule,exp);
}
*/
/* upper to lower,lower to upper
main(){
	int i,capital=0,miniscule=0;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++)
		if((s[i]>='A')&&(s[i]<='Z'))
			s[i]=s[i]+'a'-'A';
		else if((s[i]>='a')&&(s[i]<='z'))
			s[i]=s[i]-'a'+'A';
		else
			s[i]=' ';
		
	printf("%s\n",s);
}
*/
/*changing letters
main(){
	int i,capital=0,miniscule=0;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++){
		if((s[i]>='A')&&(s[i]<'Z'))
			s[i]=s[i]+1;
		else if(s[i]==' ')
			s[i]='A';
		else if((s[i]>='a')&&(s[i]<='z'))
			s[i]=s[i];
		else
			s[i]=' ';
	}
	printf("%s\n",s);
}
*/
main(){
	int i,capital=0,miniscule=0;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++){
		if((s[i]>='A')&&(s[i]<='Z'))
			s[i]='Z'-('Z'-s[i]+1)%26;
	}
	printf("%s\n",s);
}
