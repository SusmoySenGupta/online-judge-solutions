/*
	Solved at Apr/14/2020 20:20
*/
#include<stdio.h>
 
int main()
{
	int t, i, s, h, m, a[2465]={0}, max = -1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&h,&m);
		if(h == 0)
			h = 24;
			
		if(h<=9 && m<=9)
				a[(h*10)+m]++;	
		else
			a[(h*100)+m]++;	
	}
	for(i=0;i<=2459;i++)
	{
		if(a[i]>=max)
		{
			max = a[i];
		}	
	}
	printf("%d\n",max);
	return 0;
}
