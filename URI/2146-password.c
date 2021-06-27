#include<stdio.h>

int main()
{
	int N,S=0;

	while (1)
	{
		scanf("%d",&N);
		
		if(N>=1001&&N<=9999)
			S=N-1;

		printf("%d\n",S);
	
	    if(S==9998)
			break;
	}
	
return 0;
}



