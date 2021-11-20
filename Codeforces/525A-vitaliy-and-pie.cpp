/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 525A
	problem name: Vitaliy and Pie
	problem link: https://codeforces.com/problemset/problem/525/A

	Status: Accepted
	Solved at: Nov/06/2021 12:35
*/

#include <iostream>
#include <map>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 500005

#define lli long long int

#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)

using namespace std;

map<char, int> owned;

void solve()
{
    int n, limit = 0, ans = 0;
    char str[MAX];

    scanf("%d", &n);
	scanf("%s", str);
	
    limit = n * 2 - 2;

    for (int i = 0; i < limit; i++)
    {
        if (islower(str[i]))
             owned[str[i]]++;
        else
	   {
	        if(owned[tolower(str[i])])
				owned[tolower(str[i])]--;

			else ans++;
	   }
    }

    printf("%d\n", ans);
}

int main()
{
    solve();

    return 0;
}
