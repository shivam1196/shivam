#include<stdio.h>
int main()
{
int c;
while((c=getchar())!=EOF)
{	if (c==' ')
	{
		putchar('\\');
		putchar('b');
	}
	else if(c== '\t')
	{
		putchar('\\');
		putchar('t');
	}
	else if (c == '\n')
	{
		putchar('\\');
		putchar('n');
	}
	else if(c !=' ' || c!='\t' || c!='\n')
{
	putchar(c);
}}
return 0;
}












