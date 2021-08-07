/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1343A
	problem name: Candies
	problem link: https://codeforces.com/problemset/problem/1343/A

	Status: __Solved__
	Solved at: Aug/07/2021 11:45
*/

#include <iostream>
#include <math.h>

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
    lli n;

    cin >> n;

    for(int i=1; ; i++)
    {
        lli temp = ((int)pow(2, i) * 2) - 1;
        
        if(n % temp == 0)
        {
            cout << n/temp << "\n";
            break;
        }
    }

}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
