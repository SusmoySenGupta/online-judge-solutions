/*
    author: Susmoy Sen Gupta
    email: susmoy.cse@gmail.com
    github: github.com/SusmoySenGupta

    Judge: Codeforces
    problem no: 731A
    problem name: Night at the Museum
    problem link: https://codeforces.com/problemset/problem/731/A

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

int main()
{
    int count = 0, start = 1;
    string str;

    cin >> str;

    for (auto s : str)
    {
        int diff = abs(start - (s - 'a' + 1));
        start = s - 'a' + 1;
        count += min(diff, 26 - diff);
    }

    cout << count << endl;

    return 0;
}