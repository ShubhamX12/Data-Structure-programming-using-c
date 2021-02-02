#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;

};
void create();
void insertatbeg();
void insertatend();
void insertatmid();
void delbeg();
void delend();

void display(struct node * head);
struct node * head=NULL;
void main()
{       int ch;
	do
	{
		cout<<"\n *****************Operation on single lis ************";
		cout<<"\n.1.create";
		cout<<"\n 2.insert at beg";
		cout<<"\n 3.insert at end";
		cout<<"\n 4.insert at mid";
		cout<<"\n 5.deletion at beg";
		cout<<"\n 9.display";
		cout<<"\n 10.exit";
		cout<<"\n Enter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:insertatbeg();
				break;
			case 3:insertatend();
				break;
			case 4:insertatmid();

				break;
			case 5:delbeg();
			break;
			case 6:delend();
				break;
			case 9:display(head);
			break;
			case 10 :exit(0);
			break;

		}


	}while(ch!=0);


getch();
}
void create()
{
	int item,j;
	struct node * x=NULL,*y=NULL,*tmp;
	x=(struct node *)malloc(sizeof(struct node));
	cout<<"\n Enter item";
	cin>>item;
	x->data=item;
	x->next=NULL;
	head=x;
	cout<<"\n  Do you want continue press 1 otherwise 0";
	cin>>j;
	while(j!=0)
	{
		y=(struct node *)malloc(sizeof(struct node));
		cout<<"\n Enter  data";
		cin>>item;
		y->data=item;
		x->next=y;
		y->next=NULL;
		x=y;
		cout<<"\n do you wanrt continue pree 1 or 0";
		cin>>j;

	}

	cout<<"\n Node is created";
}
void insertatbeg()
{
	int item;
	struct node * x=NULL;
	x=(struct node *)malloc(sizeof(struct node));
	cout<<"\n Enter x";
	cin>>item;
	x->data=item;
	x->next=head;
	head=x;

}
void display(struct node *n)
{
	       while(n->next!=NULL)
	       {
		cout<<n->data<<"\t";
		n=n->next;
	       }
	       cout<<n->data;


}
void insertatend()
{
	int item;
	struct node *x=NULL,*tmp;
	x=(struct node *)malloc(sizeof(struct node));
	cout<<"\nEnter item";
	cin>>item;
	x->data=item;
	x->next=NULL;
	tmp=head;
	while(tmp->next!=NULL)
	{
	 tmp=tmp->next;
	}
	tmp->next=x;

}
void insertatmid()
{
	int item;
	struct node * x =NULL,*y=NULL;
	x=(struct node *)malloc(sizeof(struct node));
	y=head;
 //	s=head;
	int pos,i;
	cout<<"\n Enter postion:";
	cin>>pos;
	cout<<"\nEnter item";
	cin>>item;
	x->data=item;
      //	y=y->next;
	for(i=2;i<pos;i++)
	{
	      y=y->next;

	}
	x->next=y->next;
	y->next=x;

cout<<"insert Element succesfully";

}
void delbeg()
{
	head=head->next;
	cout<<"\n delete emelent succesfully";

}
void delend()
{
	struct node *x=head;
	while(x->next->next!=NULL)
	{
	   x=x->next;
	}
	x->next=NULL;
	cout<<"\n Node Deleted";


}