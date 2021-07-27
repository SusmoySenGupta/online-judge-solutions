/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1551A
	problem name: Polycarp and Coins
	problem link: https://codeforces.com/problemset/problem/1551/A

	Status: __Solved__
	Solved at: Jul/27/2021 20:15
*/

#include <iostream>
#include <math.h>

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
    lli n, a, b;

    cin >> n;

    a = b = n/3;

    if(n % 3 == 1) a++;
    else if(n % 3 == 2) b++;

    cout << a << " " << b << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
