#include <stdio.h>
#include <stdlib.h>
int visited[8]={0,};
typedef struct t_tree{
	char name[30];
	struct t_tree* lchild;
	struct t_tree* rchild;
}Tree;

Tree* Que[20];
int r=0,f=0;

void addLeft(Tree* p,char* item){
	Tree* u;
	u=(Tree*)malloc(sizeof(Tree));
	p->lchild=u;
	strcpy(u->name,item);
	u->lchild=0;
	u->rchild=0;
}
void addRight(Tree* p,char* item){
	Tree* u;
	u=(Tree*)malloc(sizeof(Tree));
	p->rchild=u;
	strcpy(u->name,item);
	u->lchild=0;
	u->rchild=0;
}
void Inorder(Tree* p){
	if(p==0)
		return;
	Inorder(p->lchild);
	printf("%s-",p->name);
	Inorder(p->rchild);
}
void DFS(Tree* p){
	if(p==0)
		return;
	printf("%s-",p->name);
	DFS(p->lchild);
	DFS(p->rchild);
}
void Postorder(Tree* p){
	if(p==0)
		return;
	Postorder(p->lchild);
	Postorder(p->rchild);
	printf("%s-",p->name);
}

int isEmpty(){
	if(f==r)
		return 1;
	else
		return 0;
}

void entQue(Tree* t){
	Que[r++]=t;
}

Tree* delQue(){
	Tree* k;
	k=Que[f];
	f++;
	return k;
}

void BFS(Tree* p){
	entQue(p);
	Tree* k;
	while(!isEmpty()){
		k=delQue();
		printf("%s ",k->name);
		if(k->lchild!=NULL)
			entQue(k->lchild);
		if(k->rchild!=NULL)
			entQue(k->rchild);
	}
}
//p,p->l,p->r,p->l->l,p->l->r,p->l->l->r,p->r->l,p->r->l->l
main(){
	Tree* root;
	root=(Tree*)malloc(sizeof(Tree));
	strcpy(root->name,"Seowoo");
	addLeft(root,"Junho");
	addRight(root,"Yeji");
	addLeft(root->lchild,"Yunji");
	addRight(root->lchild,"Sehi");
	addRight(root->lchild->lchild,"Chae");
	addLeft(root->rchild,"Sumin");
	addLeft(root->rchild->lchild,"Sohi");
	Inorder(root);
	printf("\n");
	/*
	DFS(root);
	printf("\n");
	Postorder(root);
	printf("\n");
	*/
	BFS(root);

}
