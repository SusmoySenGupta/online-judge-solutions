/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1472B
	problem name: Fair Division
	problem link: https://codeforces.com/problemset/problem/1472/B

	Status: __Solved__
	Solved at: Jul/01/2021 12:11
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
	int t, n, x;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n;
	
		int arr[5] = {0};

		rep(i, 0, n)
		{
			cin >> x;

			arr[x]++;
		}

		if( (n % 2 && arr[1] > 0 && arr[1] % 2 == 0) || (n % 2 == 0 &&  arr[1] % 2 == 0 && arr[2] % 2 == 0) )
			cout << "YES" << endl;

		else
			cout << "NO" << endl;
	}

    return 0;
}
