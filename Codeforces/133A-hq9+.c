/* 
	problem no: 133A
	problem name: HQ9+
	problem link: https://codeforces.com/contest/133/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/03/2018 21:59
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[105];
	int i,l,flag=0;
	scanf("%s",a);
	l = strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
			flag = 1;
			break;
		} 
	}
	if(flag==1){
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}
