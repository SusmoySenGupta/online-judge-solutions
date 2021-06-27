#include <stdio.h>
int main()
{
	int N,i;
	float X,Y;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
	scanf("%f%f",&X,&Y);
	if(Y==0)
	printf("divisao impossivel\n");
	else
	{	
	printf("%.1f\n",X/Y);
    }
	}
	return 0;
}
