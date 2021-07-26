/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 411A
	problem name: Password Check
	problem link: https://codeforces.com/problemset/problem/411/A

	Status: __Solved__
	Solved at: Jul/26/2021 23:23
*/

#include <iostream>
#include <string.h>

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
    bool len = false, lar = false, sma = false, dig = false;

    char ch[102];

    scanf("%s", ch);
    
    int str_len = strlen(ch);

    rep(i, 0, str_len)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z') lar = true;
        else if(ch[i] >= 'a' && ch[i] <= 'z') sma = true;
        else if(ch[i] >= '0' && ch[i] <= '9') dig = true;
    }

    if(str_len >= 5) len = true;

    len && lar && sma && dig ? printf("Correct\n") : printf("Too weak\n");
}

int main()
{
	solve();

    return 0;
}
