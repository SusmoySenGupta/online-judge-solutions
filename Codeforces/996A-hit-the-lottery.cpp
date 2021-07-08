/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 996A
	problem name: Hit the Lottery
	problem link: https://codeforces.com/problemset/problem/996/A

	Status: __Solved__
	Solved at: Jul/08/2021 12:15
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
    int n, count_bill;

    scanf("%d", &n);

    int rem_100 = n % 100;
    int rem_20 = rem_100 % 20;
    int rem_10 = rem_20 % 10;

    count_bill = (n / 100) + (rem_100 / 20) + (rem_20 / 10) + (rem_10 / 5) + (rem_10 % 5);

    cout << count_bill << endl;
}

int main()
{
	solve();

    return 0;
}
