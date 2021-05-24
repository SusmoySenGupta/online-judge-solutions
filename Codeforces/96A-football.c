/* 
	problem no: 96A
	problem name: Football
	problem link: https://codeforces.com/contest/96/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Sep/18/2020 16:57
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[105];
	int i,l,j;
	scanf("%s",a);
	l = strlen(a);
	int count = 0;
	int x;
	if(l>=7)
	for(i = 0;i < l; i++){
		x = a[i];
		count = 0;
		for(j = i;j<i+7; j++){
			if(a[j]==x) count++;
		}
		if(count == 7) break;
	}
	if(count==7) printf("YES\n");
	else printf("NO\n");	
	return 0;
}
