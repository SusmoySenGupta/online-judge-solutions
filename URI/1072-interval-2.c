#include<stdio.h>
int main()
{
    int N,X,i,count=0,count1=0;
    scanf("%d",&N);
    if(N<10000)
    for(i=1;i<=N;i++)
    {
    scanf("%d",&X);
	if(X>=10&&X<=20)
	count++;
	else if(X<10||X>20)
	count1++;	
	}
    printf("%d in\n%d out\n",count,count1);	
    return 0; 	
}
