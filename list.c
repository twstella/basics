#include <stdio.h>
#include <stdlib.h>
typedef struct t_rec{
	int id;
	char name[16];
	double ave;
	int game;
	struct t_rec* next;
}Student;
void showRec(Student* r){
	printf("%d %d %2lf %s\n",r->id,r->game,r->ave,r->name);
	return;
}
Student* head=NULL;
void showList(){
	Student* p;
	printf("Items in the list\n");
	p=head;
	while(p!=NULL){
		printf("%4d %16s %4.3lf %4d \n",p->id,p->name,p->ave,p->game);
		p=p->next;
	}
	printf("--------------------------------------------\n");
	return;
}
void find5(){
	Student* p;
	p=head;
	while(p!=NULL){
		if(p->ave>0.5)
			printf("%4d %16s %4.3lf %4d \n",p->id,p->name,p->ave,p->game);
			p=p->next;
		}
	return;
}
void Append(int n,char* s,double d,int g){
	Student* p;
	if(head==NULL){
		head=(Student*)malloc(sizeof(Student));
		head->id=n;
		head->game=g;
		head->ave=d;
		strcpy(head->name,s);
		head->next=NULL;
	}
	else{
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next=(Student*)malloc(sizeof(Student));
		p=p->next; p->id=n;p->game=g;
		p->ave=d;
		strcpy(p->name,s);
		p->next=NULL;
	}
	return;
}

Student* findList(char* s){
	Student* p;
	p=head;
	while(p!=NULL){
		if(!strcmp(p->name,s))
			return p;
		p=p->next;
	}
	return NULL;	
}
void Insert(char* s,int i,char* n,double a,int g){
	Student* p,*k;
	p=findList(s);
	k=(Student*)malloc(sizeof(Student));
	k->id=i;
	strcpy(k->name,n);
	k->ave=a;
	k->game=g;
	k->next=p->next;
	p->next=k;
}
void insertFirst(int i,char* n,double a,int g){
	Student* p;
	p=(Student*)malloc(sizeof(Student));
	p->id=i;
	strcpy(p->name,n);
	p->ave=a;
	p->game=g;
	p->next=head;
	head=p;
}

void findLast(){
	Student* p;
	p=head;
	while(p->next!=NULL)
		p=p->next;
	printf("%s\n",p->name);
}

void freeAll(){
	Student* p,*t;
	p=head;
	while(p!=NULL){
		t=p->next;
		free(p);
		p=t;
	}
	head=NULL;
	return;
}
void deleteLast(){
	Student* p,*k;
	p=head;
	while(p->next->next!=0){
		p=p->next;
	}
	k=p->next;
	p->next=NULL;
	free(k);
}
void deleteFirst(){
	Student* p;
	p=head;
	head=head->next;
	free(p);
}
void deleteItem(char* s){
	Student* p,*k;
	p=head;
	while(p!=NULL){
		if(!strcmp(p->next->name,s))
			break;
		p=p->next;
	}
	k=p->next;
	p->next=p->next->next;
	free(k);
}
void rev(){
	Student *p,*q,*r;
	r=NULL;
	p=head;
	while(p!=NULL){
		q=p->next;
		p->next=r;
		r=p;
		p=q;
		head=r;
	}
}
main(){
	Student* m;
	Append(1,"애니프로스트",0.986,98);
	Append(4,"잭말론",0.567,43);
	Append(3,"맥테일러",0.876,43);
	Append(8,"길그리썸",0.365,89);
 	showList();
 	rev();
 	showList();
}
