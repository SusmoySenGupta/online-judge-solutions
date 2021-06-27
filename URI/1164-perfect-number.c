#include<stdio.h>

int main()
{
	int N,X,b=0,s[100],i,j,c=0;

	scanf("%d",&N);

	while(N--)
	{
		scanf("%d",&X);
	
		for(i=1;i<=X;i++)
		{
			if(X%i==0)
			{    
				s[c]=i;
				c++;
			}	
		}
	
		b=0;
		
		for(j=0;j<c-1;j++)
			b=b+s[j];
		
		c=0;
	  
	    if(b==X)
			printf("%d eh perfeito\n",X);
		else
			printf("%d nao eh perfeito\n",X);
	}
	
	return 0;
}
