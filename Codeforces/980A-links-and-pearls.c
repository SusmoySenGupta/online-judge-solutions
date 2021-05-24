/* 
	problem no: 980A
	problem name: Links and Pearls
	problem link: https://codeforces.com/contest/980/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/09/2018 20:40
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100000];
	int i,j,k,l,x=0,b=0;
	scanf("%s",&a);
	l = strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='-') x++;
		else b++;
	}
	if(b==0) printf("YES\n");
	else if(x%b==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
