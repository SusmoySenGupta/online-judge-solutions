#include<stdio.h>

int main()
{
    int N,i,f=1;
    
	scanf("%d",&N);
    
	if(0<N<13)
    {
	    for(i=1;i<=N;i++)
		{
			f=f*i;	
		}
	}
	
	printf("%d\n",f);
	
	return 0; 	
}
