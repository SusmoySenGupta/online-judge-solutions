#include<stdio.h>
int main()
{
  double n,s=0,avg;
  int X,count=0;
  	B:
   while(1)
   {
    A:
    scanf("%lf",&n);
    if(n>=0.0&&n<=10.0)
    {
    s=s+n;
	count++;
}
    else if(n<0.0||n>10.0)
   {
   	printf("nota invalida\n");
	goto A;
   }
   
    if(count==2)
   {
   	break;
   }

}

avg=s/2;
printf("media = %.2lf\n",avg);
D:
printf("novo calculo (1-sim 2-nao)\n");
scanf("%d",&X);
if(X<1&&X>2)
{
goto D;
}
if(X==1)
{
 goto A;
}
else if(X==2)
goto C;
C:
	return 0;	
	
}
