#include <stdio.h>
int main()
{
    int s,t,f,x;
    scanf("%d%d%d",&s,&t,&f);
    x=s+t+f;
    if(x<0) 
	{
	x+=24;	
	}
    printf("%d\n",x%24);
    return 0;
}

