/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta
 
	Judge: Codeforces
	problem no: 750A
	problem name: New Year and Hurry
	problem link: https://codeforces.com/problemset/problem/750/A
    approch: Binary Search
 
	Status: __Solved__
	Solved at: Oct/03/2021 22:24
*/
 
#include<bits/stdc++.h>
 
#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
 
#define lli long long int
 
#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)
 
using namespace std;
 
int n, k, cnt = 0;
vector<int> times;
 
void solve()
{
    scanf("%d %d", &n, &k);
 
    rep(i, 1, n+1) { cnt += i*5; times.push_back(k + cnt); }
 
   cout << (upper_bound(times.begin(), times.end(), 240) - times.begin()) << endl;
}
 
int main()
{
	solve();
 
    return 0;
}