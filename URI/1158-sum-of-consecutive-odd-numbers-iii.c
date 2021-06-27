#include<stdio.h>
int main()
{
   int i,j,x,y,t,s;

   while(scanf("%d",&x))
    {
    if(x==0)
    {
    	break;
	}
	else
    j=1;
    s=0;
    if(x%2==1)
    for(i=x+1;;i+=2)
    {   
       //Just to add the numbers
    	s=s+i;
    	//checking the limit of odd numbers
    	if(j==5)
    	{
    		break;
		}
		j++;
    }
    else
    for(i=x;;i+=2)
    {
    	s=s+i;
    	if(j==5)
    	{
    		break;
		}
		j++;
    }
	printf("%d\n",s);
   }	
	
	
	
  return 0;	
} 
