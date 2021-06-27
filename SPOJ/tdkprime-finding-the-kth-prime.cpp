#include<bits/stdc++.h>
#define lli long long int
#define vi vector<int>
using namespace std;

bool isNotPrime[90000001];
lli maxN = 90000000;
vi primes;

void sieve(int n){
	isNotPrime[0] = isNotPrime[1] = true;
	for(lli i=2; i*i<=n; i++)
		if(!isNotPrime[i])
			for(lli j = i*i; j<=n; j+=i)
				isNotPrime[j] = true;
	for(lli i = 2; i<=n; i++)
		if(!isNotPrime[i])
			primes.push_back(i);
}
int main(){
	lli q, n;
	cin>>q;
	sieve(maxN);
	while(q--)
		cin>>n, cout<<primes[n-1]<<endl;
	return 0;
}
