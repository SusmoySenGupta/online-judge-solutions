#include<stdio.h>
int main()
{
	int X,Z,i,s=0,count=1;
	scanf("%d",&X);
	A:
	scanf("%d",&Z);
	if(Z<=X)
	{
	goto A;	
	}
	else if(Z>X&&(Z&&X>0))
	{
	for(i=X;i<=Z;i++)
	{
	s=s+i;
	if(s>Z)
	{
	break;	
	}
	count=count+1;	
	}	
	}
	else if(Z>X&&(Z&&X<0))
	{
	for(i=Z;i<=X;i++)
	{
	s=s+i;
	if(s>Z)
	{
	break;	
	}
	count=count+1;
    }
    }
	printf("%d\n",count);
	return 0;
}
