/* 
	problem no: 41A
	problem name: Translation
	problem link: https://codeforces.com/contest/41/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/03/2018 22:28
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[200],b[200];
	int i,j,k,l1;
	scanf("%s",a);
	scanf("%s",b);
	strrev(b);
	if(strcmp(a,b)==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
