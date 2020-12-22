#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *Left,*right;
};
struct node * root=NULL;
struct node * tmp=NULL;
void  insert();
void create();
void preorder(struct node *);
void postorder(struct node *);
void inorder(struct node *);
void search(struct node *);
void main()
{
//	clrscr();
	int ch;
	clrscr();
	do
	{
	    printf(" \nMENU Tree Bar");
	    printf("\n 1.insert \n 2inorder \n3.preorder\n post order");
	    printf("\n Enter your choice");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		case 1:
			insert();
			break;
		case 2: inorder(root);
			break;
		case 3: preorder(root);
			break;
		case 4:  postorder(root);
			break;
		case 5:exit(0);
		default:
			printf("\n invalid case");

	    }




	}while(ch!=0);


}
void insert()
{
	create();
	if(root==NULL)
	{
		root=tmp;

	}
	else
	{
	      search(root);
	}

}
void create()
{
	int item;
	printf("\n Enter item");
	scanf("%d",&item);
	tmp=(struct node *)malloc(sizeof(struct node ));
	tmp->data=item;
	tmp->Left=NULL;
	tmp->right=NULL;
	printf("\n Node is created");

}
void search(struct node * t)
{
	if((tmp->data>t->data)&&(t->right!=NULL))
	{
		search(t->right);

	}
	else if((tmp->data>t->data)&&(t->right==NULL))
	{
		t->right=tmp;
	}
	else if((tmp->data<t->data)&&(t->Left!=NULL))
	{
		search(t->Left);

	}
	else if((tmp->data<t->data)&&(t->Left==NULL))
	{
		t->Left=tmp;
	}

}
void preorder(struct node *t)
{
	printf("\t%d",t->data);
	if(root==NULL)
	{
		printf("\n Tree is empty");
	}
	if(t->Left!=NULL)
	{
	preorder(t->Left);
	}
	if(t->right!=NULL)
	{
	preorder(t->right);
	 }
}
void inorder(struct node *t)
{



	if(root==NULL)
	{
		printf("\n Tree is empty");
	}

	if(t->Left!=NULL)
	{
	inorder(t->Left);
	}
	printf("\t%d",t->data);
	if(t->right!=NULL)
	{
	inorder(t->right);
	  }

}
void postorder(struct node * t)
{



	if(root==NULL)
	{
		printf("\n Tree is empty");
	}
	if(t->Left!=NULL)
	{
	postorder(t->Left);
	}
	if(t->right!=NULL)
	{
	postorder(t->right);
	    }
	    printf("\t%d",t->data);

}