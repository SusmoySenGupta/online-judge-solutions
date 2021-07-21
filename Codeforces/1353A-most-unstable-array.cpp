/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1353A
	problem name: Most Unstable Array
	problem link: https://codeforces.com/problemset/problem/1353/A

	Status: __Solved__
	Solved at: Jul/21/2021 10:26
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
    lli n, m;
    
    cin >> n >> m;

    if(n == 1)
        cout << "0\n";
    else if(n == 2)
        cout << m << "\n";
    else
        cout << m*2 << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
