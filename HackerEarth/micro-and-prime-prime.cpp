/* 
	problem no: __
	problem name: Micro and Prime Prime
	problem link: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Jan 30, 2021 at 06:19 PM
*/
#include<bits/stdc++.h>
#define lli long long int
#define REP(i, n) for(int i=1; i<=n; i++)
#define el endl
using namespace std;

bool isNotPrime[1000001];
int primePrime[1000001];

void sieve(){
	lli maxN = 1000000;
	isNotPrime[0] = isNotPrime[1] = true;
	for(lli i=2; i*i<=maxN; i++)
		if(!isNotPrime[i])
			for(lli j = i*i; j<=maxN; j+=i)
				isNotPrime[j] = true;
	
	lli count = 0;
	REP(i, maxN){
		if(!isNotPrime[i])
			count++;
		if (!isNotPrime[count])
			primePrime[i] = 1;
	}
	
	REP(i, maxN){
		primePrime[i] += primePrime[i-1];
	}
}
int main(){
	sieve();
	lli l, r, t, count;
	cin>>t;
	while(t--){
		cin>>l>>r;
		cout<<primePrime[r] - primePrime[l-1]<<el;
	}
	return 0;
}
