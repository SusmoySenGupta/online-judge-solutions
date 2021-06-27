#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int n,i,x,t,flag;
	scanf("%llu",&t);
	while(t--)
	{
	scanf("%llu",&x);
	flag=0;
	for(i=2;i<sqrt(x);i++)
	{
	if(x%i==0)
	{
		flag=1;
	//	printf("%d\n\n",x%i);
	//	break;
		}	
	}	
	if(flag==1)
	{
	printf("Not Prime\n");	
	}
	else
	{
		printf("Prime\n");
		flag=0;
		}	
	
	}
	return 0;
}
