#include<stdio.h>

int main()
{
	int i,j,x,k=1;
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=3;j++)
		{     
	    	printf("%d ",k++);
		}
		
		k++;
		printf("PUM\n");
    }
			
	return 0
}
