#include<stdio.h>
#define OUT 0
#define IN 1
int main()
{
	int c;
	int nc,nw,nl=0;
	int state=OUT;
	while((c=getchar())!=EOF)
	{	
		++nc;
		
		if (c== '\n')
		{
			++nl;
		}
		if (c == '\t' || c==' ' || c=='\n')
		{
			state =OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("The number of words= %d\n",nw);
	printf("The number of lines= %d\n",nl);
	printf("The number of characters= %d\n",nc);
}
