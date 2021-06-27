#include<stdio.h>

int main()
{
	int i,j,x,a,n,s=0;
	
	scanf("%d%d",&x,&n);
	
	while(n<=0)
	{
		scanf("%d",&n);
	}
	
	for(i=1;i<=n;i++)
	{
		s=s+x;
		x++;
	}
    
	printf("%d\n",s);
	
	return 0;
}
