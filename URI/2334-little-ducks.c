#include<stdio.h>
int main()
{
	unsigned long long int a,b;
	while(scanf("%llu",&a)==1)
	{
		if(a==-1)
		{
			break;
		}
		b=a-1;
		if(a==0)
		{
		b=0;
		}
		printf("%llu\n",b);
		
	}
	return 0;
}
