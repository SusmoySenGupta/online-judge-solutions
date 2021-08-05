/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1054A
	problem name: Elevator or Stairs?
	problem link: https://codeforces.com/problemset/problem/1054/A

	Status: __Solved__
	Solved at: Aug/03/2021 09:38
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
    int x , y, z, t1, t2, t3;

    scanf("%d %d %d %d %d %d", &x, &y, &z, &t1, &t2, &t3);

    int fl_diff = abs(x - y);
    int stair = fl_diff * t1;

    int elv_diff = abs(x - z);
    int elevator = (fl_diff*t2) + (elv_diff * t2) + (3*t3);

    elevator <= stair ? printf("YES\n") : printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
