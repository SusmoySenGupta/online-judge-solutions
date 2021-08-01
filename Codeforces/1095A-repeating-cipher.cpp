/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1095A
	problem name: Repeating Cipher
	problem link: https://codeforces.com/contest/1095/problem/A

	Status: __Solved__
	Solved at: Aug/01/2021 00:21
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
    int n;
    char ch[60];

    scanf("%d", &n);
    scanf("%s", ch);
    
    for(int i=0, k=1; i < n; i+=k, k++)
    {
        printf("%c", ch[i]);
    }
}

int main()
{
	solve();

    return 0;
}
