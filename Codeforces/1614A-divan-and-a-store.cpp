/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 1614A
    problem name: Divan and a Store
    problem link: https://codeforces.com/problemset/problem/1614/A

    Status: ____
    Solved at: __
*/

#include <iostream>
#include <vector>
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
    int n, l, r, k, count = 0;

    cin >> n >> l >> r >> k;

    vector<int> chocolates(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> chocolates[i];
    }

    sort(chocolates.begin(), chocolates.end());

    for (int i = 0; i < n; i++)
    {
        if (chocolates[i] <= r && chocolates[i] >= l && k >= chocolates[i])
            k -= chocolates[i], count++;
    }

    cout << count << "\n";
}

int main()
{
    int t;

    cin >> t;

    while (t--)
        solve();

    return 0;
}
