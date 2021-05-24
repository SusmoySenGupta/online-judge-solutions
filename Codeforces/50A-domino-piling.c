/* 
	problem no: 50A
	problem name: Domino piling
	problem link: https://codeforces.com/contest/50/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Oct/17/2017 20:38
*/
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int x=m*n;
	if(x%2==0&&m>=1&&m<=16&&n<=16&&n>=1)
	{
		printf("%d\n",x/2);
	}
	else if(x%2!=0&&m>=1&&m<=16&&n<=16&&n>=1)
	{
		printf("%d\n",(x-1)/2);
	}
	return 0;
}
