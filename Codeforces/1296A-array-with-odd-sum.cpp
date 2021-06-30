/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1296A
	problem name: Array with Odd Sum
	problem link: https://codeforces.com/problemset/problem/1296/A

	Status: __Solved__
	Solved at: Jul/01/2021 02:02
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
	int t, n, x, sum;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		
		bool odd = false, even = false;
		
		sum = 0;
		
		while(n--)
		{
			cin >> x;
			
			sum += x;
			
			if(x % 2) odd = true;
			else even = true;
		}
		
		if(sum %2 || (odd && even))
			cout << "YES" << endl;
		
		else
			cout << "NO" << endl;
	}

    return 0;
}

