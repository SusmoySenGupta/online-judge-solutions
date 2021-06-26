#include<stdio.h>
#include<math.h>
int main()

{
  int N,C,i;
  scanf("%d",&N);
  if(5<N&&N<2000)
  {
   for(i=1;i<=N;i++)
   {
    if(i%2==0)
    {
	C=pow(i,2);
    printf("%d^2 = %d\n",i,C);	
    }
   }
 }
 return 0;
}
