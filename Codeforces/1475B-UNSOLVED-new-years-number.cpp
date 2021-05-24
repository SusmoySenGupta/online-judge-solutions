/*
	Unsolved
*/
#include<bits/stdc++.h>
#define lli long long int
#define el endl
using namespace std;

int main(){
	lli t, n;
	cin>>t;
	while(t--){
		cin>>n;

		if(n < 2020) cout<<"NO"<<el;
		else{
			if(n%2021 == 0 || n%2020 == 0 || (n-1)%2020 == 0) 
				cout<<"YES"<<el;
			else
				cout<<"NO"<<el;	
		}
	}
	return 0;
}
