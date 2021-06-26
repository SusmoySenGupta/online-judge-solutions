#include<stdio.h>
int main()
{
   int i,n,count1=0,count2=0,count3=0,count4=0,count;
    for(i=1;i<=5;i++)
    {
    	scanf("%d",&n);
    	if(n%2==0)
    	{
    	count1++;	
		}
		 if(n%2!=0)
		{
		count2++;	
		}
		 if(n>0)
		{
		count3++;	
		}
		 if(n<0)
		{
		count4++;	
		}
    	
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count1,count2,count3,count4);
	return 0;
}
