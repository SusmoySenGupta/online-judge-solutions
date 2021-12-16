/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 337A
    problem name: Puzzles
    problem link: https://codeforces.com/problemset/problem/337/A

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
    int n, m, x, min_val = INT_MAX;

    scanf("%d %d", &n, &m);

    vector<int> puzzles(m, 0);

    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end(), greater<int>());

    for (int i = 0; i <= puzzles.size() - n; i++) {
        min_val = min(min_val, puzzles[i] - puzzles[i + n - 1]);
    }

    printf("%d\n", min_val);
}

int main()
{
    solve();

    return 0;
}
