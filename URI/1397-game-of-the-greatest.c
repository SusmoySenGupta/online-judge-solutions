#include<stdio.h>
int main()
{
	int t,a,b,c,c1,i;
	while(scanf("%d",&t)==1)
	{
		c=0;
		c1=0;
		if(t==0)
		{
			break;
		}
		for(i=1;i<=t;i++)
		{
			scanf("%d%d",&a,&b);
			if(a>b)
			{
				c++;
			}
			else if(a<b)
			{
				c1++;
			}
			else if(a==b)
			{
				c=c;
				c1=c1;
			}
		}
		printf("%d %d\n",c,c1);
	}
	return 0;
}
