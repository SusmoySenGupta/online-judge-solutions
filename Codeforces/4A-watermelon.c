/* 
	problem no: 4A
	problem name: Watermelon
	problem link: https://codeforces.com/contest/4/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Oct/16/2017 21:12
*/
#include<stdio.h>
int main()
{
	int x,n;
	scanf("%d",&x);
	if(x%2!=0)
	{
		printf("NO\n");
	}
	else if(x<=2)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");	
	}
	return 0;
}
