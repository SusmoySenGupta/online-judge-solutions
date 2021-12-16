/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 1618A
    problem name: Polycarp and Sums of Subsequences
    problem link: https://codeforces.com/problemset/problem/1618/A

    Status: ____
    Solved at: __
*/

#include <iostream>
#include <vector>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define ll long long int

void solve()
{
    vector<int> numbers(7);

    for (int i = 0; i < 7; i++)
        cin >> numbers[i];

    cout << numbers[0]  << " " << numbers[1] << " " << numbers[6] - numbers[1] - numbers[0] << "\n";
}

int main()
{
    int t;

    cin >> t;

    while (t--)
        solve();

    return 0;
}
