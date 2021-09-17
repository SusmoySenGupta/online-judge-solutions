/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 550A
	problem name: Two Substrings
	problem link: https://codeforces.com/problemset/problem/550/A

	Status: __Solved__
	Solved at: Sep/17/2021 10:38
*/

#include <iostream>
#include <string.h>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    char ch[MAX];

    scanf("%s", ch);
    
    int len = strlen(ch);
    bool found_ab = false, found_ba = false;

    rep(i, 0, len - 1)
    {
        string temp = "";
        temp = temp + ch[i];
        temp = temp + ch[i + 1];

        if(!found_ab && temp == "AB") { found_ab = true; i++; }
        if(found_ab && temp == "BA"){ found_ba = true; break; }
    }

    if(!found_ab || !found_ba)
    {
        found_ab = found_ba = false;

        rep(i, 0, len - 1)
        {
            string temp = "";
            temp = temp + ch[i];
            temp = temp + ch[i + 1];

            if(!found_ba && temp == "BA"){ found_ba = true; i++; }
            if(found_ba && temp == "AB") { found_ab = true; i++; }
        }
    }

    if(found_ab && found_ba) printf("YES\n");
    else printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
