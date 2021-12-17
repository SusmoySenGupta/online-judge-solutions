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

    int countA = 0, countB = 0, countC = 0;

    for (auto c : str)
    {
        if (c == 'A')
            countA++;
        if (c == 'B')
            countB++;
        if (c == 'C')
            countC++;
    }

    countB -= countC;

    if (countA - countB == 0)
        cout << "YES\n";

    else
        cout << "No\n";
}

int main()
{
    int t;

    cin >> t;

    while (t--)
        solve();

    return 0;
}
