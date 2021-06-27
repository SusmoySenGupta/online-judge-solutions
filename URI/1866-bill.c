#include<stdio.h>
int main()
{
	int n,s=0,i,t;
	scanf("%d",&t);
	while(t--)
	{
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			s=s+1;
		}
		else
		{
			s=s-1;
		}
	}
	printf("%d\n",s);
}
	return 0;
}
