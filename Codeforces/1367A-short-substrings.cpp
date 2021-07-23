/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1367A
	problem name: Short Substrings
	problem link: https://codeforces.com/problemset/problem/1367/A

	Status: __Solved__
	Solved at: Jul/24/2021 00:25
*/

#include <iostream>
#include <cstring>

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
    char ch[102];

    scanf("%s", ch);

    for (int i=0; i < strlen(ch); i += 2)printf("%c", ch[i]);
    
    printf("%c\n", ch[strlen(ch) - 1]);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
