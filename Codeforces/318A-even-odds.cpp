/* 
	problem no: 318A
	problem name: Even Odds
	problem link: https://codeforces.com/problemset/problem/318/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/22/2021 00:59
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b, div;
	cin>>a>>b;
	div =  a % 2 == 0 ? a/2 : (a/2 + 1);
	if(b > div) {
		cout<< 2 * (b - div)<<endl;
	}
	else {
		cout<< 2 * b - 1 <<endl;
	}
	return 0;
}
