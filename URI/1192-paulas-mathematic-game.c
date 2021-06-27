#include<stdio.h>
int main()
{
	char a;
	int x,y,t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d%c%d",&x,&a,&y);
		if(a>=65&&a<=90)
		{
			if(x==y)
				printf("%d\n",x*y);
	
			else
				printf("%d\n",y-x);
			
		}
		else if(a>=97&&a<=122)
		{
			if(x==y)
				printf("%d\n",x*y);
			else
				printf("%d\n",x+y);
		}
    }
	return 0;
}
