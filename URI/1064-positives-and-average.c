#include<stdio.h>
int main()
{
 float X,avg,s=0.0;
 int i,count=0;	
 for(i=1;i<=6;i++)
 { 
  scanf("%f",&X);
  if(X>0)
  {
  s=s+X;
  count++;
  avg=s/count;
  } 
 } 	
printf("%d valores positivos\n",count,avg);	
	printf("%.1f\n",avg);
	
	
return 0;	
}
