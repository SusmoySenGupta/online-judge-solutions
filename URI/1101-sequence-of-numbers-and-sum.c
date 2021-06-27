#include<stdio.h>
int main()
{
	int j,M,N,i,s;
	A:
	scanf("%d%d",&M,&N);
	if(M<=0||N<=0)
	{
		goto B;	
	}
	else
	{
		if(M<N)
		{
		s=0;
		for(i=M;i<=N;i++)
		{
			printf("%d ",i);
			s=s+i;
		}
		printf("Sum=%d",s);
		printf("\n");
		}
		else
		{
			s=0;	
			for(i=N;i<=M;i++)
			{
				printf("%d ",i);
				s=s+i;
			}
			printf("Sum=%d",s);
			printf("\n");	
		}
		goto A;
	}
	
	B:
		
	return 0;  	
}
