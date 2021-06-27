/*
 Unsloved
*/
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool isPrime(lli n){
	if(n == 1)
		return false;
	for(int i=2; i*i<=n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}
int main(){
	lli q, n;
	cin>>q;
	while(q--){
		cin>>n;
		if(isPrime(n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}		
	return 0;
}
