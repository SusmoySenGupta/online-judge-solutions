/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1097A
	problem name: Gennady and a Card Game
	problem link: https://codeforces.com/problemset/problem/1097/A

	Status: __Solved__
	Solved at: Jul/18/2021 11:09
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
    string tab, hand[10];

    cin >> tab;

    rep(i, 0, 5) cin >> hand[i];

    rep(i, 0, 5) 
    {
        if(tab[0] == hand[i][0] || tab[1] == hand[i][1])
        {
            printf("YES\n");
            return;
        }
    }

    printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
