#define  Len 10
#define Small -100
#include <stdio.h>
/*integer array
main(){
	int i,cA=0,cB;
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='A')
			cA++;
		if(s[i]=='B')
			cB++;
	}
	printf("%d %d\n",cA,cB);
}
*/
/*number of A to Z
main(){
	int i,count[26]={0,};
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++)
		if((s[i]>='A')&&(s[i]<='Z'))
			count[s[i]-'A']++;
	for(i=0;i<26;i++)
		printf("%c:%2d\n",'A'+i,count[i]);
}
*/
/* numbers of a to z
main(){
	int i,count[26]={0,};
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++)
		if((s[i]>='a')&&(s[i]<='z'))
			count[s[i]-'a']++;
	for(i=0;i<26;i++)
		printf("%c:%2d\n",'a'+i,count[i]);
}
*/
/*numbers of upper and lower case
main(){
	int i,count[26]={0,};
	char s[30];
	
	gets(s);
	for(i=0;i<strlen(s);i++)
		if((s[i]>='A')&&(s[i]<='Z'))
			count[s[i]-'A']++;
	for(i=0;i<strlen(s);i++)
		if((s[i]>='a')&&(s[i]<='z'))
			count[s[i]-'a']++;
	for(i=0;i<26;i++)
		printf("%c:%2d\n",'A'+i,count[i]);
	for(i=0;i<26;i++)
		printf("%c:%2d\n",'a'+i,count[i]);		
}
*/
void DumpArray(int e[]){
	int i;
	for(i=0;i<Len;i++)
		printf("%d ",e[i]);
		printf("\n");
		return;
}
/* bigger than bound
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int bound;
	int count=0;
	scanf("%d",&bound);
	DumpArray(ele);
	for(i=0;i<Len;i++)
		if(ele[i]>bound){
			printf("%d ",ele[i]);
			count++;
		}
	printf("\n%d",count);
}
*/
/*numbers between
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int min,max;
	scanf("%d %d",&min,&max);
	for(i=0;i<Len;i++)
		if((ele[i]>min)&&(ele[i]<max))
			printf("%d ",ele[i]);
}
*/
/*
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int min,max;
	int sum=0;
	scanf("%d %d",&min,&max);
	for(i=0;i<Len;i++)
		if((ele[i]>min)&&(ele[i]<max))
			sum+=ele[i];
	printf("%d ",sum);
}
*/
/*
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int min,max;
	int sum=0;
	//scanf("%d %d",&min,&max);
	for(i=0;i<Len;i++)
		if((i%2)==0)
			sum+=ele[i];
	printf("%d",sum);
}
*/
/* sum
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int max=-100;
	int sum=0;
	for(i=0;i<Len;i++){
		sum+=ele[i];
		if(max<ele[i])
			max=ele[i];
	}
	printf("Max %d\n",max);
	printf("%d",sum);
}
*/
/* minimun
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int min=100;
	int sum=0;
	for(i=0;i<Len;i++){
		sum+=ele[i];
		if(min>ele[i])
			min=ele[i];
	}
	printf("Min %d\n",min);
	printf("%d",sum);
}
*/
/*find max index
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int max=-100;
	int l;
	int sum=0;
	for(i=0;i<Len;i++){
		sum+=ele[i];
		if(max<ele[i]){
			max=ele[i];
			l=i;
		}
	}
	printf("Max %d Index %d\n",max,l);
	printf("%d",sum);
}
*/
/* find secon max
main(){
	int i,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int max=-100;
	int l=0;
	int sec=-100;
	for(i=0;i<Len;i++){
		
		if(max<ele[i]){
			max=ele[i];
			l=i;
		}
	}
	ele[l]=-100;
	printf("Max %d\n",max);
	printf("Max %d Index %d\n",max,l);	
	max=-100;
	for(i=0;i<Len;i++){
	
		if(max<ele[i]){
			max=ele[i];
			l=i;
		}
	}
	printf("Second max %d\n",max);	
}
*/
/*print max
main(){
	int i,j,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int maxi;
	for(j=0;j<Len;j++){
		maxi=j;
		for(i=0;i<Len;i++)
			if(ele[maxi]<ele[i])
				maxi=i;
		printf("%d\n",maxi);
	
		ele[maxi]=Small;
	;
	}
	DumpArray(ele);
}
*/
/* change index0
main(){
	int i,tmp,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int maxi=0;
	for(i=0;i<Len;i++)
		if(ele[maxi]<ele[i])
			maxi=i;
		tmp=ele[maxi];
		ele[maxi]=ele[0];
		ele[0]=tmp;
	
		DumpArray(ele);
}
*/
/*change index1
main(){
	int i,tmp,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int maxi=0;
	for(i=1;i<Len;i++)
		if(ele[maxi]<ele[i])
			maxi=i;
		tmp=ele[maxi];
		ele[maxi]=ele[1];
		ele[1]=tmp;
	
		DumpArray(ele);
}
*/
/*sorting
main(){
	int i,j,tmp,ele[Len]={3,2,0,1,-4,10,-5,5,-1,9};
	int mini;
	for(j=0;j<Len;j++){
		mini=j;
		for(i=j;i<Len;i++)
			if(ele[mini]>ele[i])
				mini=i;
			tmp=ele[mini];
			ele[mini]=ele[j];
			ele[j]=tmp;
			DumpArray(ele);
	}
		DumpArray(ele);
}
*/

