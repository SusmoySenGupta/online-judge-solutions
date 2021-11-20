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

vector<int> puzzles;

void solve()
{
    int n, m, x, min_val = INT_MAX;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        puzzles.push_back(x);
    }

    sort(puzzles.begin(), puzzles.end());

    for (int i = 1; i <= n; i++)
    {
        // min_val = min(min_val, puzzles[i] - puzzles[i - 1]);
        cout << puzzles[i] - puzzles[i - 1] << endl;
    }
    printf("%d\n", min_val);
}

int main()
{
    solve();

    return 0;
}
