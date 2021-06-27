#include<stdio.h>
int main()
{
 int n,i,count1,count2,count3;
 A:
  scanf("%d",&n);
 if(n>=1&&n<=4)
{
for(i=1;i>0;i++)
    {
     if(n==1)
	 {
	 	count1++;
		 }	
		 else if(n==2)
		 {
		 	count2++;
		 }
		 else if(n==3)
		 {
		 count3++;	
		 }
		 else if(n==4)
		 {
		 	break;
		 }
	}
}
else
goto A;
	
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",count1,count2,count3);	
	
	
	
	
	
	
	
	
	
	return 0;
}
