#include<stdio.h>
int main()
{
	int a,b,x;
	scanf("%d%d%d",&x,&a,&b);
	if(a+b<=x)
	{
		printf("Farei hoje!\n");
	}
	else
	{
		printf("Deixa para amanha!\n");
	}
	return 0;
}
