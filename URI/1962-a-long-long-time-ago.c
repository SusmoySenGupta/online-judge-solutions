#include<stdio.h>
int main()
{
	long long int a,t;
	scanf("%lld",&t);
    while(t--)
    {
	    scanf("%lld",&a);
	if(a>2015||a==2015)
		{
			printf("%d A.C.\n",(a-2015)+1);
		}
		else{
			printf("%d D.C.\n",(2015-a));
		}
    }
    
	return 0;
}
