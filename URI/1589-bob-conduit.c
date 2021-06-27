#include<stdio.h>
int main()
{
	long int x,y,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld%ld",&x,&y);
			printf("%d\n",x+y);
	}
	return 0;
}
