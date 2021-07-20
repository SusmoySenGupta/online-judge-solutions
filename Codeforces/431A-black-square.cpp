/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 431A
	problem name: Black Square
	problem link: https://codeforces.com/problemset/problem/431/A

	Status: __Solved__
	Solved at: Jul/21/2021 01:44
*/

#include <iostream>
#include <cstring>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX (int)1e5

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int arr[5], sum = 0;
    char ch[MAX];

    rep(i, 1, 5) 
        scanf("%d", &arr[i]);

    scanf("%s", ch);

    int len = strlen(ch);

    rep(i, 0, len) sum += arr[ch[i] - '0'];

    printf("%d\n", sum);
}

int main()
{
	solve();

    return 0;
}
