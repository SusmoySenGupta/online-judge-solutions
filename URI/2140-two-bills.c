#include<stdio.h>
int main()
{
	int a,b,x;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(a==0&&b==0)
		{
			break;
		}
	
	x=b-a;
	if(x==7||x==12||x==22||x==52||x==102||x==15||x==25||x==55||x==105||x==30||x==60||x==110||x==70||x==120||x==150)
	{
		printf("possible\n");
	}
	else
	{
		printf("impossible\n");
	}
    }
	return 0;
}
