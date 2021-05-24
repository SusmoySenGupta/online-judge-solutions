/*
	Solved at Apr/14/2020 02:43
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,a[50],i,s[3] = {0}, max = -1,p = 0;
	scanf("%d",&t);
	for(i=0; i<t; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<=t; i++)
	{
		
		if(i%3 == 0)
		{
			s[2] += a[i-1];
		}
		else if(i%3 == 2)
		{
			s[1] += a[i-1];
		}
		else
		{
			s[0] += a[i-1];
		}
		
	}
	
	for(i=0;i<3;i++)
	{
		if(s[i]>max)
		{
			max = s[i];
			p = i;
		}
	}
	if(p == 0)
	{
		printf("chest\n");
	}
	else if(p == 1)
	{
		printf("biceps\n");
	}
	else
	{
		printf("back\n");	
	}

	return 0;
}

