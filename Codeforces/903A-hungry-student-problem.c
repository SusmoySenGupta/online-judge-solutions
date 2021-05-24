/* 
	problem no: 903A
	problem name: Hungry Student Problem
	problem link: https://codeforces.com/contest/903/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/05/2018 13:13
*/
#include<stdio.h>
int main(){
	int t,x;
	scanf("%d",&t);
	while(t--){
		
		scanf("%d",&x);
		if(x==1||x==2||x==4||x==8||x==11||x==5)
			printf("NO\n");
		
		else
		    printf("YES\n");
		
	}	
	return 0;
}
