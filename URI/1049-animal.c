#include<stdio.h>
int main()
{
	char a[2];
	float sum=0,c,r,s;
	int i,n,x,j,l,k,count1=0,count2=0,count3=0,sum1;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    scanf("%d%s",&x,a);
    if(a[0]=='C')
	{
	for(j=1;j<=x;j++)
	{
	count1++;	
	}	
	}
	else if(a[0]=='R')
	{
	for(l=1;l<=x;l++)
	{
	count2++;	
	}		
	}	
	else if(a[0]=='S')
	{
	for(k=1;k<=x;k++)
	{
	count3++;	
	}		
	}
	
		
	}
  sum1=count1+count2+count3;
  sum=count1+count2+count3;
  c=(count1/sum)*100.00;
  r=(count2/sum)*100.00;
  s=(count3/sum)*100.00;
  

printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",sum1,count1,count2,count3);
printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",c,r,s);
 

	return 0;
}

