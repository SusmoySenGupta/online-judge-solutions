/* 
	problem no: 914A
	problem name: Perfect Squares
	problem link: https://codeforces.com/contest/914/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Feb/22/2018 20:40
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	long int t,n,a[1005],i,j;
	scanf("%ld",&t);
	for(i=0, j=0;i<t;i++){
		scanf("%ld",&n);
		long int x=sqrt(n);
		if(x*x!=n){
			a[j] = n;
			j++;
		}
	} 
	sort(a,a+j);
	printf("%ld\n",a[j-1]);
	return 0;
}
