#include<stdio.h>
int main()
{
	int X[10],i=0,x;
	while(i<10)
	{
	 scanf("%d",&x);
	 if(x<=0)
	 {
	 	X[i]=1;
	 	printf("X[%d] = 1\n",i);
	 }	
	 else
	 {
	 	X[i]=x;
	 	printf("X[%d] = %d\n",i,x);
	 }
		
		i++;
    }
    return 0;
}
