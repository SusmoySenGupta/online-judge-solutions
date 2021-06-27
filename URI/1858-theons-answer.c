#include<stdio.h>

int main()
{
	int a[100],i,n,x,min=10000,pos=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		
		if(x<min){
			min = x;
			pos = i;
		}
	}
	
	printf("%d\n",pos);
	
	return 0;
}
