/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 146A
	problem name: Lucky Ticket
	problem link: https://codeforces.com/problemset/problem/146/A

	Status: __Solved__
	Solved at: Jul/12/2021 01:39
*/

#include <iostream>
#include <cstring>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 51

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n;
    char ch[MAX];

    scanf("%d", &n);
    scanf("%s", ch);

    int len = strlen(ch), sum_a = 0, sum_b = 0;

    for (int i = 0, j = len-1; i < j; i++, j--)
    {
        if( (ch[i] != '4' && ch[i] != '7') || (ch[j] != '4' && ch[j] != '7') )
        {
            printf("NO\n");
            return;
        }

        else
        {
            sum_a += (ch[i] - '0');
            sum_b += (ch[j] - '0');
        }
    }

    sum_a == sum_b ? printf("YES\n") : printf("NO");
}

int main()
{
	solve();

    return 0;
}
