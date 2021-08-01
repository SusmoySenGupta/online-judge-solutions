/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1400A
	problem name: String Similarity
	problem link: https://codeforces.com/problemset/problem/1400/A

	Status: __Solved__
	Solved at: Aug/01/2021 11:33
*/

#include <iostream>
#include <string.h>

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
    int n;
    string str;
    string ans = "";

    cin >> n >> str;

    for(int i=0, j=0; i < str.size(); i+=2) ans += str[i];

    cout << ans << "\n";
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
