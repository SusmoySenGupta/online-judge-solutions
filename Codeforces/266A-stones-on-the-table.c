/* 
	problem no: 266A
	problem name: Stones on the Table
	problem link: https://codeforces.com/contest/266/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/03/2018 21:32
*/
#include<stdio.h>
int main(){
	char a[100];
	int i,j,k,n;
	scanf("%d",&n);
	scanf("%s",a);
	int count  = 0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
