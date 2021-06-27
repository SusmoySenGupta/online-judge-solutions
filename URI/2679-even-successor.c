#include<stdio.h>
int main()
{
	long long int x,i,y;
	scanf("%lld",&x);
	if(x%2==0)
	{
		x=x+2;
	}
	else
	{
	  x=x+1;
	}
	printf("%lld\n",x);
	
	
	return 0;
}
