#include<stdio.h>
int main()
{
int blank=0;
int tabs=0;
int newline=0;
int c=0;
while((c=getchar())!= EOF)
{
	if(c==' ')
	{
		++blank;
	}
	else if ('\t' == c)
	{
		++tabs;
	}
	else if ('\n'==c)
	{
		++newline;
	}
}
printf("Number of Blanks= %d\n",blank);
printf("Number of Tabs= %d\n",tabs);
printf("Number of newlines= %d\n",newline);
}

