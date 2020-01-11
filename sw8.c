#include <stdio.h>
#include <stdlib.h>
typedef struct t_rec{
	int id;
	char name[16];
	double ave;
	int game;
	struct t_rec* next;
}Student;
/*
main(){
	Student s;
	printf("%d\n",sizeof(s));
	printf("%d %d %d\n",sizeof(s.id),sizeof(s.ave),sizeof(s.name));
	printf("%ld %ld %ld\n",&s.id,&s.ave,&s.name);
	s.id=6;
	s.game=10;
	s.ave=6.5;
	//strcpy(s.name,"Haha");
}
*/
/*
main(){
	Student* s;
	printf("%d %d\n",sizeof(s),sizeof(*s));
	s->id=6;
	s->game=10;
	s->ave=6.5;
	strcpy(s->name."Haha");
}
*/
void showRec(Student* r){
	printf("%d %d %2lf %s\n",r->id,r->game,r->ave,r->name);
	return;
}
/*
main(){
	Student *s,*t,*u;
	printf("%d %d %d %d\n",sizeof(s),sizeof(*s),sizeof(s->id),sizeof(s->next));
	s=(Student*)malloc(sizeof(Student));
	t=(Student*)malloc(sizeof(Student));
	u=(Student*)malloc(sizeof(Student));
	s->id=6;s->game=10;s->ave=6.5;strcpy(s->name,"Haha");
	t->id=7;t->game=20;t->ave=5.5;strcpy(t->name,"Kaka");
	u->id=8;u->game=30;u->ave=7.5;strcpy(u->name,"Mama");
	showRec(s);showRec(t);showRec(u);
	free(s);free(t);free(u);
}
*/
/*
main(){
	Student *s,*t,*u,*p;
	s=(Student*)malloc(sizeof(Student));
	t=(Student*)malloc(sizeof(Student));
	u=(Student*)malloc(sizeof(Student));
	s->id=7;s->game=10;s->ave=6.5;strcpy(s->name,"Haha");s->next=t;
	t->id=7;t->game=20;t->ave=5.5;strcpy(t->name,"Kaka");t->next=u;
	u->id=8;u->game=30;u->ave=7.5;strcpy(u->name,"Mama");u->next=0;
	p=s;
	while(p!=0){
		showRec(p);
		p=p->next;
	}
}
*/
Student* head=NULL;
void showList(){
	Student* p;
	printf("Items in the list\n");
	p=head;
	while(p!=NULL){
		printf("%4d %16s %4.3lf %4d \n",p->id,p->name,p->ave,p->game);
		p=p->next;
	}
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
			
main(){
	Student* m;
	Append(1,"애니프로스트",0.986,98);
	Append(4,"잭말론",0.567,43);
	Append(3,"맥테일러",0.876,43);
	Append(8,"길그리썸",0.365,89);
	Append(9,"브렌다리존슨",0.789,43);
	Append(6,"칼라이트만",0.212,69);
	Append(5,"질리안포스터",0.333,38);
	Append(7,"올리비아벤슨",0.756,67);
	Append(10,"엘리엇스테이블러",0.555,54);
	//showList();
	//findLast();
	//m=findList("잭말론");
	//showRec(m); 
	//find5();
	Insert("잭말론",11,"추신수",0.333,55); 
	//showList();
	insertFirst(12,"이서우",0.92,92);
	showList(); 
	deleteFirst();
	showList();
	deleteLast();
	showList();
	deleteItem("질리안포스터");
	showList(); 
}
