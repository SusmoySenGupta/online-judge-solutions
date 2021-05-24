/* 
	problem no: 71A
	problem name: Way Too Long Words
	problem link: https://codeforces.com/contest/71/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Oct/17/2017 01:35
*/
/*
	Solved at Oct/17/2017 01:35
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		l=strlen(a); 	
		if(l>10)
		{
			printf("%c%d%c\n",a[0],l-2,a[l-1]);	
		}	
		else
		{
			printf("%s\n",a);
		}	
	}
	return 0;
}
