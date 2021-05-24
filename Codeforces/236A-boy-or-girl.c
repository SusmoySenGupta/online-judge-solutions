/*
	Solved at Apr/14/2020 11:58
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int a[125]={0},i,count=0;
	char s[1000005];
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		a[s[i]]++;
	}
	for(i=97;i<=122;i++)
	{
		if(a[i]>0)
		{
			count++;
		}
	}
	if(count%2 == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
	
	
	return 0;
}
