/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 432A
	problem name: Choosing Teams
	problem link: https://codeforces.com/problemset/problem/432/A

	Status: __Solved__
	Solved at: Jul/01/2021 01:33
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
	int t, n, x, count = 0;
	
	cin >> t >> n;
	
	while(t--)
	{
		cin >> x;
		
		if(n + x <= 5)
			count++;
	}
	
	cout << count / 3 << endl;
	
    return 0;
}
