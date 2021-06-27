#include<stdio.h>
int main()
{
	int a,i,s=0;
	for(i=1;i<=4;i++)
	{
		scanf("%d",&a);
		s=s+a;
	}
	printf("%d\n",s-3);
	return 0;
}
