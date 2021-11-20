/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1607A
	problem name: Linear Keyboard
	problem link: https://codeforces.com/problem/1607/A

	Status: Accepted
	Solved at: _Nov/03/2021 16:45_
*/

#include <iostream>
#include <math.h>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 256

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    string key, str;
    int sum = 0;

    cin >> key >> str;

    rep(i, 1, str.size()) 
    {
        int x = key.find(str[i-1]) + 1;
        int y = key.find(str[i]) + 1;

        sum += abs(x - y);
    } 

    cout << sum << endl;
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
