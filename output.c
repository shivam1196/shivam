#include<stdio.h>
int main()
{
int ch;
if((ch = printf("%d",1234)))
{
printf("It matters\n");
}
else
{
printf("It doesnt works\n");
}
return 0;
}
