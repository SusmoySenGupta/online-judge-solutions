#include<stdio.h>

int main()
{
	float A[100],x;
	int i;
	
	for(i=0;i<100;i++)
	{ 
		scanf("%f",&x);
		
		if(x<=10.0||x<0)
		{
			A[i]=x;
		    
		    printf("A[%d] = %.1f\n",i,A[i]);
	    }
	}
		
	return 0;
}
