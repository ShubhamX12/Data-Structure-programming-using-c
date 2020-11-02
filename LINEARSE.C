#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={11,22,33,44,55};
	int i,j,n,*p;
	printf("\n Enter number");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<5;i++)
	{
		if(*p==n)
		{

		 printf("number is found");
		 break;


		}
		p++;

	}
	if(i==5)
	{
	 printf("number is not found");

	}

	getch();
}