#include<stdio.h>
int main()
{
	int x,c,c1,t,i;
	while(scanf("%d",&t)==1)
	{
		c=0;
		c1=0;
		if(t==0){
			break;
		}
		for(i=1;i<=t;i++)
		{
			scanf("%d",&x);
			if(x==0)
			{
				c++;
			}
			else if(x==1)
			{
				c1++;
			}
		}
		printf("Mary won %d times and John won %d times\n",c,c1);
	}
	return 0;
}
