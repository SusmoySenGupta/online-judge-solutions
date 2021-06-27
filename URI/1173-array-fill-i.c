#include<stdio.h>

int main()
{
	int N[10],x,i,j;
	
	scanf("%d",&x);
	
	for(i=0;i<10;i++)
	{
		N[i]=x;
		
		x*=2;
	}

	for(j=0;j<10;j++)
	{
		printf("N[%d] = %d\n",j,N[j]);
	}
	
	return 0;
}
