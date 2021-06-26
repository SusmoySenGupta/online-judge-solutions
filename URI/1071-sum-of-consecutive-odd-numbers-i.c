#include<stdio.h>
int main()
{
int a,b,i,j,s=0;
scanf("%d%d",&a,&b);

for(i=b+1;i<a;i++)
{   
    if(i%2!=0)
	s=s+i;
	}	
printf("%d\n",s);	
}
