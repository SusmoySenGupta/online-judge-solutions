/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	iudge: Codeforces
	problem no: 873A
	problem name: Text Volume
	problem link: https://codeforces.com/problemset/problem/837/A

	Status: __Solved__
	Solved at: Aug/05/2021 10:51
*/

#include <iostream>
#include <string>

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
    int n, volume = 0;
    string str;

    cin >> n;
    getchar();
    getline(cin, str);

    int count = 0;
    rep(i, 0, n)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
            volume = max(volume, count);
        }

        if(str[i] == ' ') count = 0;
    }

    cout << volume << "\n";
}

int main()
{
	solve();

    return 0;
}
