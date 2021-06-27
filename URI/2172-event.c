#include<stdio.h>
int main()
{
	unsigned long long int x,n;
	while(scanf("%llu%llu",&n,&x)==2)
	{
	if(n==0&&x==0){
		break;
	}	
	printf("%llu\n",n*x);		
	}
	return 0;
}
