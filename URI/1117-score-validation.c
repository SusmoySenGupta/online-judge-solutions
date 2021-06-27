#include<stdio.h>
int main()
{
	float n,s=0,i,avg;
	int count=0;
	while(1)
	{
    	A:
		scanf("%f",&n);
    	{
    		if(n>=0.0&&n<=10.0)
    		{
    			s=s+n;
				count++;	
    		}
    		if(n<0.0||n>10.0)
			{
				printf("nota invalida\n");
				goto A;
			}
		}
    	if(count==2)
		{
			break;
		}
	}
	
	avg=s/2;
	printf("media = %.2f\n",avg);
	
	return 0;	
}
