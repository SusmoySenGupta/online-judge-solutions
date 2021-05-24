/* 
	problem no: 231A
	problem name: Team
	problem link: https://codeforces.com/contest/231/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Jan/01/2018 10:47
*/
#include<stdio.h>
int main()
{
	int i,t,x,y,z,c=0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d%d",&x,&y,&z);
	if(x==1&&y==1&&z==1)
	{
	c++;	
	}	
	else if(x==1&&y==1&&z==0)
	{
	c++;	
	}	
	else if(x==1&&y==0&&z==1)
	{
	c++;	
	}	
	else if(x==0&&y==1&&z==1)
	{
	c++;	
	}	
	}
	printf("%d\n",c);
	return 0;
}
