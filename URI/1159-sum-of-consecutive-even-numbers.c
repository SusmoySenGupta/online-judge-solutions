#include<stdio.h>
int main()
{
	int X,i,s,count=0;
    while(1)
    {
    //s=0;	
	scanf("%d",&X);
		for(i=X;i>0;i++)
		{
			s=0;
			if(i%2==0)
			{
				s=s+i;
				count++;
			}
			//count++;
			if(count==5)
			{
				break;
			}
			continue;
		}
	
	
	printf("%d\n",s);

    if(X==0)
   {
   	break;
  }
}
	//printf("%d\n",s);	
	return 0;
}
