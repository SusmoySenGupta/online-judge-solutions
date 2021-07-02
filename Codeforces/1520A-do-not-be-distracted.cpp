/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1520A
	problem name: Do Not Be Distracted!
	problem link: https://codeforces.com/problemset/problem/1520/A

	Status: __Solved__
	Solved at: Jul/02/2021 12:26
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

void solve()
{
	int n, str_length;
	string str;
	
	cin >> n >> str;

	str_length  = str.size();

	for(int ch = 'A'; ch <= 'Z'; ch++)
	{
		int first = n, last = -1;

		for(int i = 0; i < str_length; i++)
		{
			if(str[i] == ch)
			{
				first = min(first, i);
				last = max(last, i);
			}
		}

		for(int i = first; i <= last; i++)
		{
			if(str[i] != ch)
			{
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}

int main()
{
	int t;
	
	cin >> t;
	
	while(t--)
	{
		solve();
	}

    return 0;
}
