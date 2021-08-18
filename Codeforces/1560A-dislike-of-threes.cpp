/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1560A
	problem name: Dislike of Threes
	problem link: https://codeforces.com/contest/1560/problem/A

	Status: __Solved__
	Solved at: Aug/18/2021 23:52
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int arr[MAX];

void generateNumber()
{
    for(int i = 1, j = 0; i < 1e5 && j < MAX; i++)
    {
        if(i % 10 == 3 || i % 3 == 0) continue;

        arr[j++] = i;
    }
}

void solve()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", arr[n-1]);
}

int main()
{
    generateNumber();

    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
