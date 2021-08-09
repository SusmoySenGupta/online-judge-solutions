/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no:
	problem name:
	problem link:

	Status: __Solved__
	Solved at: Aug/09/2021 21:59
*/

#include <iostream>
#include <cstring>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n;
    char ch[100];

    scanf("%d", &n);
    scanf("%s", ch);

    int temp[100], count = 0;

    rep(i, 0, n) temp[i] = ch[i];
    
    sort(temp, temp + n);

    rep(i, 0, n) if((int)ch[i] != temp[i]) count++;

    printf("%d\n", count);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
