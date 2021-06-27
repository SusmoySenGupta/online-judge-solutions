#include<stdio.h>

int main()
{
	int i,j,k,n;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2;j++)
		{   
    		if(j%2==0)
			{
    			printf("%d %d %d",i,((i*i)+1),((i*i*i)+1));
			}
			else
			{
				printf("%d %d %d",i,(i*i),(i*i*i));
			}
		printf("\n");	
		}
	}
		
	return 0;
}
