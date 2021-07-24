/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 427A
	problem name: Police Recruits
	problem link: https://codeforces.com/problemset/problem/427/A

	Status: __Solved__
	Solved at: Jul/24/2021 13:38
*/

#include <iostream>

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
    int n, x, count = 0, sum = 0;

    scanf("%d", &n);

    rep(i, 0, n) 
    {
        scanf("%d", &x);
        
        if(x == -1) {
            if(!sum) count++; 
            else sum--;
        }
        else sum += x;
    }

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
