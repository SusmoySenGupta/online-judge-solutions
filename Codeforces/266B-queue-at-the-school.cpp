/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 266B
	problem name: Queue at the School
	problem link: https://codeforces.com/problemset/problem/266/B

	Status: __Solved__
	Solved at: Jul/24/2021 11:59
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
    int n, t;
    char ch[51];

    scanf("%d%d", &n, &t);
    scanf("%s", ch);

    while (t--)
    {
        rep(i, 0, n-1)
            if(ch[i] == 'B' && ch[i+1] == 'G'){
                swap(ch[i], ch[i+1]);
                i++;
            }
    }

    printf("%s\n", ch);
}

int main()
{
	solve();

    return 0;
}
