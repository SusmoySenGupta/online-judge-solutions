/* 
	problem no: 110A
	problem name: Nearly Lucky Number
	problem link: https://codeforces.com/contest/110/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/03/2018 21:49
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0,l;
	char a[20];
	scanf("%s",a);
	l = strlen(a);
	for(i = 0;i<l;i++){
		if(a[i]=='7'||a[i]=='4') count++;
	}
	if(count==7||count==4) printf("YES\n");
	else printf("NO\n");
	return 0;
}
