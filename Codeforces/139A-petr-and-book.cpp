/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 139A
	problem name: Petr and Book
	problem link: https://codeforces.com/problemset/problem/139/A

	Status: __Solved__
	Solved at: Jul/12/2021 02:15
*/

#include <iostream>

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
    int n, arr[7], pos = -1;
    
    scanf("%d", &n);

    rep(i, 0, 7) scanf("%d", &arr[i]);

    while(n > 0)
    {
        rep(i, 0, 7)
        {
            n -= arr[i];

            if(n <= 0)
            {
                pos = i + 1;
                break;
            }
        }
    }

    cout << pos << endl;
}

int main()
{
	solve();

    return 0;
}
