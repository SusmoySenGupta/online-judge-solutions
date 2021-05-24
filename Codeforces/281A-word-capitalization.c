/* 
	problem no: 281A
	problem name: Word Capitalization
	problem link: https://codeforces.com/contest/281/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Oct/17/2017 01:23
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1005],b[1005];
	int i;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
	    if(a[0]>=97&&a[0]<=122)
		{
			a[0]=a[0]-32;
		}
		a[i]=a[i];
	}
	printf("%s\n",a);
	return 0;
}
