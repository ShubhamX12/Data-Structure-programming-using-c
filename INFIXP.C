
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
void refersh();
int  top=-1;
char a[7];
int i;
char str[]=" ";
void plus();
void minus();
void mul();
void div();
void ex();
void main()
{ int k;
  refersh();

    getch();


}
void refersh()
{


      char str1[30];
      int i,l;

      clrscr();
      printf("\033[0;34m");
    printf("\n****************************************************************************");
    printf("\n****************************************************************************");
    printf("\033[0;33m");
    printf("\n \t\t\tINFINIX TO POSTFIX");
    printf("\033[0;34m");
    printf("\n****************************************************************************");
    printf("\n****************************************************************************");
    printf("\n Enter Infix experssion:");
    scanf("%s",&str1);
 for(i=0;i<sizeof(str1);i++)
      {
		 // printf("\n%c",str1[0]);

		  switch(str1[i])
		  {
			case 'A':
				strcat(str,"A");
				break;
			case 'B':
				strcat(str,"B");
				break;
			case 'C':
				strcat(str,"C");
				break;
			case 'D':
				strcat(str,"D");
				break;
			case 'E':
				strcat(str,"E");
				break;
			case 'F':
				strcat(str,"F");
				break;

			case 'G':
				strcat(str,"G");
				break;
			case 'H':
				strcat(str,"H");
				break;
			case 'I':
				strcat(str,"I");
				break;
			case 'J':
				strcat(str,"J");
				break;
			case 'K':
				strcat(str,"K");
				break;
			case 'L':
				strcat(str,"L");
				break;
			case 'M':
				strcat(str,"M");
				break;
			case 'N':
				strcat(str,"N");
				break;
			case 'O':
				strcat(str,"O");
				break;
			case 'P':
				strcat(str,"P");
				break;
			case 'Q':
				strcat(str,"Q");
				break;
			case 'R':
				strcat(str,"R");
				break;
			case 'S':
				strcat(str,"S");
				break;
			case 'T':
				strcat(str,"T");
				break;
			case 'U':
				strcat(str,"U");
				break;
			case 'V':
				strcat(str,"V");
				break;
			case 'W':
				strcat(str,"W");
				break;
			case 'X':
				strcat(str,"X");
				break;
			case 'Y':
				strcat(str,"Y");
				break;
			case 'Z':
				strcat(str,"Z");
				break;
			case '+':
			    ///	plus();
				if(top==-1)
				{
					top=top+1;
					a[top]='+';

				}
				else if(a[top]=='+')
				{top=top-1;
				strcat(str,"+");
				top=top+1;
				a[top]='+';

				}
				else if(a[top]=='-')
				{
					top=top-1;
					strcat(str,"-");
					if(a[top]=='+')
				      {
				       plus();
				      }
				      else if(a[top]=='-')
				      {
					plus();
				      }
				      else if(a[top]=='^')
				      {
					plus();
				      }
				      else
				      {
				      top=top+1;
				      a[top]='+';
				       }


				}
				else if(a[top]=='*')
				{     top=top-1;
				      strcat(str,"*");
				      //top=top-1;
				      if(a[top]=='+')
				      {
				       plus();
				      }
				      else if(a[top]=='-')
				      {
					plus();
				      }
				      else if(a[top]=='^')
				      {
					plus();
				      }
				      else
				      {
				      top=top+1;
				      a[top]='+';
				       }
				}
				else if(a[top]=='/')
				{
					 strcat(str,"/");
				      top=top-1;
				       if(a[top]=='+')
				      {
				       plus();
				      }
				      else if(a[top]=='-')
				      {
					plus();
				      }
				      else if(a[top]=='^')
				      {
					plus();
				      }
				      else
				      {

				      top=top+1;
				      a[top]='+';
				      }
				}
				else if(a[top]=='^')
				{  char s[20];
				 top=top-1;
				  strcat(str,"^");
				      if(a[top]=='+')
				      {
				       plus();
				      }
				      else if(a[top]=='-')
				      {
					plus();
				      }
				      else if(a[top]=='^')
				      {
					plus();
				      }
				      else
				      {

				      top=top+1;
				      a[top]='+';
				     }
				}
				else
				{
				top=top+1;
				 a[top]='+';

				}

			       break;
			case '-':
				if(top==-1)
				{
					top=top+1;
					a[top]='-';

				}
				else if(a[top]=='-')
				{
				 top=top-1;
				 strcat(str,"-");

				if(a[top]=='+')
				      {
				       minus();
				      }
				      else if(a[top]=='-')
				      {
					minus();
				      }
				      else if(a[top]=='^')
				      {
					minus();
				      }
				      else
				      {

					top=top+1;
					a[top]='-';
				      }
				}
				else if(a[top]=='+')
				{
				top=top-1;
				strcat(str,"+");

				if(a[top]=='+')
				      {
				       minus();
				      }
				      else if(a[top]=='-')
				      {
					minus();
				      }
				      else if(a[top]=='^')
				      {
					minus();
				      }
				      else
				      {

					top=top+1;
					a[top]='-';
				      }
				}
				else if(a[top]=='*')
				{
				      strcat(str,"*");
				      top=top-1;

				if(a[top]=='+')
				      {
				       minus();
				      }
				      else if(a[top]=='-')
				      {
					minus();
				      }
				      else  if(a[top]=='*')
				      {
				       minus();

				      }
				      else  if(a[top]=='/')
				      {
				       minus();

				      }
				      else if(a[top]=='^')
				      {
					minus();
				      }
				      else
				      {

					top=top+1;
					a[top]='-';
				      }


				}
				else if(a[top]=='/')
				{
					 strcat(str,"/");
				      top=top-1;

				if(a[top]=='+')
				      {
				       minus();
				      }
				      else if(a[top]=='-')
				      {
					minus();
				      }
				      else  if(a[top]=='*')
				      {
				       minus();

				      }
				      else  if(a[top]=='/')
				      {
				       minus();

				      }
				      else if(a[top]=='^')
				      {
					minus();
				      }
				      else
				      {

					top=top+1;
					a[top]='-';
				      }

				}
				else if(a[top]=='^')
				{
				  strcat(str,"^");
				      top=top-1;

				if(a[top]=='+')
				      {
				       minus();
				      }
				      else if(a[top]=='-')
				      {
					minus();
				      }
				      else  if(a[top]=='*')
				      {
				       minus();

				      }
				      else  if(a[top]=='/')
				      {
				       minus();

				      }
				      else if(a[top]=='^')
				      {
					minus();
				      }
				      else
				      {

					top=top+1;
					a[top]='-';
				      }


				}
				else
				{
				top=top+1;
				 a[top]='-';
				}
				break;

			case '*':
				if(top==-1)
				{
				 top=top+1;
				 a[top]='*';


				}
				else if(a[top]=='*')
				{
				 top=top-1;
				 strcat(str,"*");


				if(a[top]=='+')
				      {
				       mul();
				      }
				      else if(a[top]=='-')
				      {
					mul();
				      }
				      else  if(a[top]=='*')
				      {
				       mul();

				      }
				      else  if(a[top]=='/')
				      {
				       mul();

				      }
				      else if(a[top]=='^')
				      {
					mul();
				      }
				      else
				      {

					top=top+1;
					a[top]='*';
				      }

				}
				else if(a[top]=='/')
				{
				 top=top-1;
				 strcat(str,"/");

				if(a[top]=='+')
				      {
				       mul();
				      }
				      else if(a[top]=='-')
				      {
					mul();
				      }
				      else if(a[top]=='/')
				      {
				       mul();
				      }
				      else if(a[top]=='^')
				      {
					mul();
				      }
				      else
				      {

					top=top+1;
					a[top]='*';
				      }
				}
				else if(a[top]=='^')
				{
				 top=top-1;
				 strcat(str,"^");

				if(a[top]=='+')
				      {
				       mul();
				      }
				      else if(a[top]=='-')
				      {
					mul();
				      }
				      else if(a[top]=='/')
				      {
				       mul();
				      }
				      else if(a[top]=='^')
				      {
					mul();
				      }
				      else
				      {

					top=top+1;
					a[top]='*';
				      }


				}
				else
				{top=top+1;
				a[top]='*';

				}

				break;

			case '/':
				if(top==-1)
				{
				 top=top+1;
				 a[top]='/';


				}
				else if(a[top]=='*')
				{
				top=top-1;
				strcat(str,"*");

				if(a[top]=='+')
				      {
				       div();
				      }
				      else if(a[top]=='-')
				      {
					div();
				      }
				      else  if(a[top]=='*')
				      {
				       div();

				      }
				      else  if(a[top]=='/')
				      {
				       div();

				      }
				      else if(a[top]=='^')
				      {
					div();
				      }
				      else
				      {

					top=top+1;
					a[top]='/';
				      }

				}
				else if(a[top]=='/')
				{
				top=top-1;
				strcat(str,"/");

				if(a[top]=='+')
				      {
				       div();
				      }
				      else if(a[top]=='-')
				      {
					div();
				      }
				      else  if(a[top]=='*')
				      {
				       div();

				      }
				      else  if(a[top]=='/')
				      {
				       div();

				      }
				      else if(a[top]=='^')
				      {
					div();
				      }
				      else
				      {

					top=top+1;
					a[top]='/';
				      }
				}
				else if(a[top]=='^')
				{
					top=top-1;
					strcat(str,"^");

				if(a[top]=='+')
				      {
				       div();
				      }
				      else if(a[top]=='-')
				      {
					div();
				      }
				      else  if(a[top]=='*')
				      {
				       div();

				      }
				      else  if(a[top]=='/')
				      {
				       div();

				      }
				      else if(a[top]=='^')
				      {
					div();
				      }
				      else
				      {

					top=top+1;
					a[top]='/';
				      }
				}
				else
				{
				 top=top+1;
				 a[top]='/';
				}
				break;
			case '^':
				if(top==-1)
				{
				 top=top+1;
				 a[top]='^';


				}
				else if(a[top]=='*')
				{

				 top=top+1;
				 a[top]='^';
				}
				else if(a[top]=='/')
				{
				 top=top+1;
				 a[top]='^';
				}
				else if(a[top]=='^')
				{
				top=top-1;
				strcat(str,"^");

				if(a[top]=='+')
				      {
					ex();
				      }
				      else if(a[top]=='-')
				      {
					ex();
				      }
				      else  if(a[top]=='*')
				      {
				       ex();

				      }
				      else  if(a[top]=='/')
				      {
				       ex();

				      }
				      else if(a[top]=='^')
				      {
					ex();
				      }
				      else
				      {

					top=top+1;
					a[top]='^';
				      }

				}
				else
				{
				 top=top+1;
				 a[top]='^';
				}

				break;
		  }

      }

    printf("\033[0;33m");
    printf("\n%s=\t%s",str1,str);
      for(i=top;i>=-1;i--)
      {
       printf("%c",a[i]);

      }
	  printf("\033[0;34m");
    printf("\n****************************************************************************");
    printf("\n****************************************************************************");
    getch();
  //  clrscr();

      //	 */
}

void plus()
{
 if(top==-1)
				{
					top=top+1;
					a[top]='+';

				}
				else if(a[top]=='+')
				{top=top-1;
				strcat(str,"+");
				top=top+1;
				a[top]='+';

				}
				else if(a[top]=='-')
				{
					top=top-1;
					strcat(str,"-");
					top=top+1;
					a[top]='+';

				}
				else if(a[top]=='*')
				{
				      strcat(str,"*");
				      top=top-1;
				      top=top+1;
				      a[top]='+';
				      plus();

				}
				else if(a[top]=='/')
				{
					 strcat(str,"/");
				      top=top-1;
				      top=top+1;
				      a[top]='+';

				}
				else if(a[top]=='^')
				{  char s[20];
				 top=top-1;
				  strcat(str,"^");
				     // top=top-1;
				    /* s=a[top];

				     while((s!='+')||(s!='-'))
				     {
				      strcat(str,s);
				     }*/
				      top=top+1;
				      a[top]='+';

				}
				else
				{
				top=top+1;
				 a[top]='+';

				}

}
void minus()
{
	if(top==-1)
				{
					top=top+1;
					a[top]='-';

				}
				else if(a[top]=='-')
				{
				 top=top-1;
				 strcat(str,"-");
				top=top+1;
				a[top]='-';
				 //a[top]='-';
				}
				else if(a[top]=='+')
				{
				top=top-1;
				strcat(str,"+");
				top=top+1;
				a[top]='-';

				}
				else if(a[top]=='*')
				{
				      strcat(str,"*");
				      top=top-1;
				      top=top+1;
				      a[top]='-';

				}
				else if(a[top]=='/')
				{
					 strcat(str,"/");
				      top=top-1;
				      top=top+1;
				      a[top]='-';

				}
				else if(a[top]=='^')
				{
				  strcat(str,"^");
				      top=top-1;
				      top=top+1;
				      a[top]='-';
				}
				else
				{
				top=top+1;
				 a[top]='-';
				}


}
void mul()
{

				if(top==-1)
				{
				 top=top+1;
				 a[top]='*';


				}
				else if(a[top]=='*')
				{
				 top=top-1;
				 strcat(str,"*");
				 top=top+1;
				 a[top]='*';
				}
				else if(a[top]=='/')
				{
				 top=top-1;
				 strcat(str,"/");
				 top=top+1;
				 a[top]='*';
				}
				else if(a[top]=='^')
				{
				 top=top-1;
				 strcat(str,"^");
				 top=top+1;
				 a[top]='*';
				}
				else
				{top=top+1;
				a[top]='*';

				}
}
void div()
{

				if(top==-1)
				{
				 top=top+1;
				 a[top]='/';


				}
				else if(a[top]=='*')
				{
				top=top-1;
				strcat(str,"*");
				 top=top+1;
				 a[top]='/';
				}
				else if(a[top]=='/')
				{
				top=top-1;
				strcat(str,"/");
				 top=top+1;
				 a[top]='/';
				}
				else if(a[top]=='^')
				{
					top=top-1;
					strcat(str,"^");
				 top=top+1;
				 a[top]='/';
				}
				else
				{
				 top=top+1;
				 a[top]='/';
				}

}
void ex()
{

				if(top==-1)
				{
				 top=top+1;
				 a[top]='^';


				}
				else if(a[top]=='*')
				{

				 top=top+1;
				 a[top]='^';
				}
				else if(a[top]=='/')
				{
				 top=top+1;
				 a[top]='^';
				}
				else if(a[top]=='^')
				{
				top=top-1;
				strcat(str,"^");
				 top=top+1;
				 a[top]='^';
				}
				else
				{
				 top=top+1;
				 a[top]='^';
				}


}