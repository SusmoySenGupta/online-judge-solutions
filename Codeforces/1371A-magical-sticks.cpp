/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1371A
	problem name: Magical Sticks
	problem link: https://codeforces.com/problemset/problem/1371/A

	Status: __Solved__
	Solved at: Jul/16/2021 01:02
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    lli n;

    cin >> n;

    n % 2 ? cout << n / 2 + 1 : cout << n / 2;
     
    cout << endl; 
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
        solve();

    return 0;
}
