/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 486A
	problem name: Calculating Function
	problem link: https://codeforces.com/problemset/problem/486/A

	Status: __Solved__
	Solved at: Jul/01/2021 00:44
*/

#include <iostream>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int main()
{
	lli x;
	
	cin >> x;
	
	if(x % 2)
		cout << 0 - ((x / 2) + 1) << endl;

	else
		cout << x / 2 << endl;

    return 0;
}
