#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int n=2,flag=0,l=0,m,h=5;
	for(m=(l+h)/2;l<=h;m=(l+h)/2)
	{
		if(a[m]==n)
		{     flag=1;
			printf("number is found %d",m);
			break;


		}
		if(a[m]>n)
			h=m-1;
		else
			l=m+1;


	}
	if(flag==0)
	printf("\n number is not found");
 getch();
}