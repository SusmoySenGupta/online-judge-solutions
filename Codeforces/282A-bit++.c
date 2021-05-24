/* 
	problem no: 282A
	problem name: Bit++
	problem link: https://codeforces.com/contest/282/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Dec/31/2017 09:51
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,t,l,c=0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s",a);
	if(a[0]=='+'&&a[1]=='+'&&a[2]=='X')	
	{
	c++;	
	}
	else if(a[0]=='X'&&a[1]=='+'&&a[2]=='+')	
	{
	c++;
	}	
	else if(a[0]=='X'&&a[1]=='-'&&a[2]=='-')	
	{
		c--;
	}	
	else if(a[0]=='-'&&a[1]=='-'&&a[2]=='X')	
	{
		c--;
	}
	
	}
	printf("%d\n",c);
	
	
	
	return 0;
}
