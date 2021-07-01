/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 707A
	problem name: Brain's Photos
	problem link: https://codeforces.com/problemset/problem/707/A

	Status: __Solved__
	Solved at: Jul/02/2021 01:03
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
	int m, n;
	char c;
	bool isColor = false;
	
	cin >> m >> n;
	
	rep(i, 0, m)
	{
		rep(j, 0, n)
		{
			cin >> c;
			
			if(c == 'C' || c == 'M' || c == 'Y')
				isColor = true;
		}
	}
	
	isColor ? cout << "#Color" << endl : cout << "#Black&White" << endl;

    return 0;
}

