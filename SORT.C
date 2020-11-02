#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
	int a[max];
	int i,j,n,temp;
	clrscr();
	printf("\n\nEnter size of Array");
	scanf("%d",&n);
	printf("Enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray before sorting:-");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);


	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=(n-2)-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}

		}

	}

	for(i=0;i<n;i++)
	{
	printf("\n\t%d",a[i]);

	}

 getch();
}