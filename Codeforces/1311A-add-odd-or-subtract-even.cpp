/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1311A
	problem name: Add Odd or Subtract Even
	problem link: https://codeforces.com/problemset/problem/1311/A

	Status: __Solved__
	Solved at: Jul/17/2021 13:00
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
    int a, b;

    scanf("%d%d", &a, &b);

    if(a == b) printf("0\n");

    else if( (a%2 && b%2) || (a%2==0 && b%2==0) )
        a < b ? printf("2\n") : printf("1\n");
    else
        a < b ? printf("1\n") : printf("2\n");
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
