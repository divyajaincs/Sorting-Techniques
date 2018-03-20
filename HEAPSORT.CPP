#include<stdio.h>
#include<conio.h>
void insert(node *, node *);
typedef struct bst
{
int data;
 struct bst *rchild,*lchild;
}node;
void main()
{
char ans='N';
node *root,*newnode,*temp,*parent;
clrscr();
    do
	{
	 newnode=getnode();
	 printf("enter you ele");
	scanf("%d",&newnode->data);
	if(root==NULL)
	root=newnode;
	else
	insert(root,newnode);
	printf("you want to insert more ele?(y/n)");
	ans=getch();
       }while(ans=='y');

getch();

}
  node *getnode()
{
node *temp;
temp=(node *)malloc(sizeof(node));
temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}
void insert(node *root,node *newnode)
{   node *p,*sibling;
p=root;
if(newnode->data<p->data)
{
if(p->lchild==NULL)
{
p->lchild=newnode;
}
else if(p->rchild==NULL)
{   sibling=p->rchild;
p->rchild=newnode;
}
else
{







)


}


