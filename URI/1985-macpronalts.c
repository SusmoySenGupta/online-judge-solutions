#include<stdio.h>
int main()
{
	int t;
	float a,b,s=0.0;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%f%f",&a,&b);
		if(a==1001)
		{
			s=s+(b*1.50);
		}
		else if(a==1002)
		{
			s+=(b*2.50);
		}
		else if(a==1003)
		{
			s+=(b*3.50);
		}
		else if(a==1004)
		{
			s+=(b*4.50);
		}				
		else if(a==1005)
		{
			s+=(b*5.50);
		}			
	}
	printf("%.2f\n",s);
	return 0;
}
