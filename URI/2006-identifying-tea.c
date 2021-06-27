#include<stdio.h>
int main()
{
	int x,n,c=0,i;
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&x);
		if(x==n)
		{
			c++;
		}
	}
	
	printf("%d\n",c);
	return 0;
}
