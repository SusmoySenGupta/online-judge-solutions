/* 
	problem no: 228A
	problem name: Is your horseshoe on the other hoof?
	problem link: https://codeforces.com/contest/228/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/15/2020 13:47
*/
#include<stdio.h>
int main()
{
	int t = 0, x[3], i, j;
	for(i=0;i<4;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(x[i] == x[j] && x[i] > 0)
			{
				x[j] = 0;
				t++;
			} 
		}
	}
	printf("%d\n",t);
	return 0;
}
