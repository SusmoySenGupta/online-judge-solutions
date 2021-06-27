#include<stdio.h>

int main()
{
	int n;
	float s=0.0,count=0.0,avg;

	while(1)
	{
		scanf("%d",&n);
		
		if(n<0)
		{
			break;	
		}
		else 
			s=s+n;
		
		count++;	
	}
	
	avg=s/count;
	
	printf("%.2f\n",avg);
	
	return 0;
}
