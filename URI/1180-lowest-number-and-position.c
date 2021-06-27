#include<stdio.h>
int main()
{
	int n,i,minimum;
	scanf("%d",&n);
	int min[n],count=1;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&min[i]);	
	}
	
	minimum=min[0];
	
	for(i=1;i<n;i++)
	{
		if(min[i]<minimum)
		{
			minimum=min[i];
			count=i;
		}
		else 
		minimum=minimum;
	}
	
	printf("Menor valor: %d\nPosicao: %d\n",minimum,count);
	
	return 0;
}
