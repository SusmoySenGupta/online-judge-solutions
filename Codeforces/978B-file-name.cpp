/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 978B
	problem name: File Name
	problem link: https://codeforces.com/problemset/problem/978/B

	Status: __Solved__
	Solved at: Aug/02/2021 22:00
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
    int n, ans = 0;
    char ch[102];

    scanf("%d", &n);
    scanf("%s", ch);

    rep(i, 0, n)
    {
        if(ch[i] == 'x')
        {
            int count = 0;
            rep(j, i, n)
            {
                if(ch[j] == 'x') {
                    count++; 
                    i++;
                }
                else break;
            }

            if(count > 2) ans += (count-2);  
        }
    }

    printf("%d\n", ans);
}

int main()
{
	solve();

    return 0;
}
