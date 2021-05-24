/* 
	problem no: 61A
	problem name: Ultra-Fast Mathematician
	problem link: https://codeforces.com/contest/61/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Dec/30/2017 23:22
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[105],b[105],c[105];
	scanf("%s%s",a,b);
	int i,l=strlen(a);
	for(i=0;i<l;i++)
	{
	if(a[i]=='1'&&b[i]=='1')
	{
	c[i]='0';	
	}
	else if(a[i]=='0'&&b[i]=='0')	
	{
		c[i]='0';
	}
	else if(a[i]=='1'&&b[i]=='0')	
	{
	c[i]='1';	
	}	
	else if(a[i]=='0'&&b[i]=='1')	
	{
	c[i]='1';	
	}
		
	}
	c[l]='\0';
	printf("%s\n",c);
	
	
	
	
	return 0;
}
