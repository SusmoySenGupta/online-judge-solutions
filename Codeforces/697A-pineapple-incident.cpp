/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 697A
    problem name:  Pineapple Incident
    problem link: https://codeforces.com/problemset/problem/697/A

    Status: __Accepted__
    Solved at: Dec/07/2021 21:53
*/

#include <iostream>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define ll long long int

void solve()
{
    int t, s, x;

    cin >> t >> s >> x;

    if (t == x)
        cout << "YES\n";
    else if ((x - t - 1) > 0 && ((x - t) % s == 0 || (x - t - 1) % s == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    solve();

    return 0;
}
