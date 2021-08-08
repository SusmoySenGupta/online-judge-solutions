/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 572A
	problem name: Arrays
	problem link: https://codeforces.com/problemset/problem/572/A

	Status: __Solved__
	Solved at: Aug/08/2021 11:53
*/

#include <iostream>
 
#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005
 
#define lli long long int
 
#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)
 
using namespace std;
 
void solve()
{
	int n, m;
	int s, t;
	int a[MAX], b[MAX];
	
	scanf("%d %d", &n, &m);
	scanf("%d %d", &s, &t);
	
	rep(i, 0, n) scanf("%d", &a[i]);
	rep(i, 0, m) scanf("%d", &b[i]);
	
	if(a[s-1] < b[m-t])
		printf("YES\n");
	else
		printf("NO\n");
}
 
int main()
{
	solve();
 
    return 0;
}
