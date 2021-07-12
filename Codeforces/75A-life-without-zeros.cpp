/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 75A
	problem name: Life Without Zeros
	problem link: https://codeforces.com/problemset/problem/75/A

	Status: __Solved__
	Solved at: Jul/13/2021 00:45
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

int removeZero(int number)
{
    int res = 0, count = 0;

    while(number != 0)
    {
        int temp = number % 10;

        if(temp != 0) res += (temp * (int) pow(10, count++));

        number /= 10;
    }

    return res;
}

void solve()
{
    int a, b, c;

    scanf("%d%d", &a, &b);

    c = a + b;

    removeZero(a) + removeZero(b) == removeZero(c) ? printf("YES\n") : printf("NO");
}

int main()
{
	solve();

    return 0;
}
