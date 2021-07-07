/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 344A
	problem name: Magnets
	problem link: https://codeforces.com/problemset/problem/344/A

	Status: __Solved__
	Solved at: Jul/08/2021 01:26
*/

#include <iostream>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define lli long long int
#define MAX 100005

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, arr[MAX] = {0}, count = 1;

    scanf("%d", &n);

    rep(i, 0, n)
        scanf("%d", &arr[i]);
    
    int check = arr[0];

    rep(i, 1, n)
    {
        if(check != arr[i])
        {
            check = arr[i];
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
	solve();

    return 0;
}