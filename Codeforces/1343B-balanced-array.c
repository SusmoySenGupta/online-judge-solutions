/* 
	problem no: 1343B
	problem name: Balanced Array
	problem link: https://codeforces.com/contest/1343/problem/B
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/22/2020 18:32
*/
#include<stdio.h>
int main()
{
	int i,t,n,even,odd;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%4 == 0)
		{
			int a[n+1];
			for(i=0, even=2, odd=1 ;i<n; i++)
			{
				if(i<n/2)
				{
					a[i] = even;
					even+=2;
				}
				else
				{
					a[i] = odd;
					odd+=2;
				}	
			}
			a[n-1] += n/2;
			printf("YES\n");
			for(i=0; i<n; i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}
		else
			printf("No\n");	
	}
	
	return 0;
}
