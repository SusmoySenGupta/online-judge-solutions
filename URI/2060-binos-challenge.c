#include<stdio.h>
int main()
{
	int t,n,c2=0,c3=0,c4=0,c5=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			c2++;
		}
		if(n%3==0)
		{
			c3++;
		}
		if(n%4==0)
		{
			c4++;
		}
		if(n%5==0)
		{
			c5++;
		}
	}
	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",c2,c3,c4,c5);
	
	
	
	
	
	
	
	
	return 0;
}
