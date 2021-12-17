/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 1579A
    problem name: Casimir's String Solitaire
    problem link: https://codeforces.com/problemset/problem/1579/A

    Status: ____
    Solved at: __
*/

#include <iostream>
#include <algorithm>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define ll long long int

void solve()
{
    string str;

    cin >> str;

    cout << (count(str.begin(), str.end(), 'B') * 2 == str.size() ? "YES\n" : "NO\n");
}

int main()
{
    int t;

    cin >> t;

    while (t--)
        solve();

    return 0;
}
