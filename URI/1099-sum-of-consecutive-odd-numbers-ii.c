#include<stdio.h>
int main()
{
int a,b,i,j,s,n,k;
scanf("%d",&n);
for(j=1;j<=n;j++)
{
scanf("%d%d",&a,&b);
s=0;
if(a>b)
{
for(i=b+1;i<a;i++)
   {   
    if(i%2!=0)
	s=s+i;
	}
}
else if(b>a)
{
	for(k=a+1;k<b;k++)
    {   
    if(k%2!=0)
	s=s+k;
	}
}
printf("%d\n",s);	
}
return 0;
}
