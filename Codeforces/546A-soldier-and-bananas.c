/* 
	problem no: 546A
	problem name: Soldier and Bananas
	problem link: https://codeforces.com/contest/546/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/03/2018 21:14
*/
#include<stdio.h>
int main(){
	long int k,n,w,i,j,x;
	scanf("%ld%ld%ld",&k,&n,&w);
	long int s = 0;
	for(i=1;i<=w;i++)
	{
		s = s + (i*k);
	}
	if(n<s)
	{
		printf("%ld\n",s-n);
	}
	else printf("0\n");
	return 0;
}
