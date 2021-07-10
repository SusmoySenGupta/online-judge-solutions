/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1146A
	problem name: Love "A"
	problem link: https://codeforces.com/problemset/problem/1146/A

	Status: __Solved__
	Solved at: Jul/10/2021 15:52
*/

#include <iostream>
#include <cstring>

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
    char ch[55];
    int count_a = 0, count_other = 0;

    scanf("%s", ch);

    int len = strlen(ch);

    rep(i, 0, len) {
        if(ch[i] == 'a')
            count_a++;
        else
            count_other++;
    }

    if(count_a > count_other)
        printf("%d\n", strlen(ch));
    
    else
        printf("%d\n", len - ((count_other - count_a) + 1) );
}

int main()
{
	solve();

    return 0;
}
