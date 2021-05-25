/* 
	problem no: __
	problem name: Prime Interval
	problem link: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/prime-interval/
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Jan 30, 2021 at 09:38 AM
*/
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool isNotPrime[1000001];
lli maxN = 1000000;

void sieve(int n){
	isNotPrime[0] = isNotPrime[1] = true;
	for(lli i=2; i*i<=n; i++)
		if(!isNotPrime[i])
			for(lli j = i*i; j<=n; j+=i)
				isNotPrime[j] = true;
}
int main(){
	int l, r;
	cin>>l>>r;
	sieve(maxN);
	for(lli i=l; i<=r; i++)
		if(!isNotPrime[i])
			cout<<i<<" ";
	return 0;
}
