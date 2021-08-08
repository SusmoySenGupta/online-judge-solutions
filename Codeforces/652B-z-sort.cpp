/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 652B
	problem name: z-sort
	problem link: https://codeforces.com/problemset/problem/652/B

	Status: __Solved__
	Solved at: Aug/08/2021 11:55
*/

#include <iostream>
#include <algorithm>
 
#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003
 
#define lli long long int
 
#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)
 
using namespace std;
 
void solve()
{
	int n, arr[MAX];
	
	scanf("%d", &n);
	
	rep(i, 0, n) scanf("%d", &arr[i]);
	
	sort(arr, arr + n);
	
	rep(i, 0, n-1)
	{
		if(i%2) swap(arr[i], arr[i+1]);
	}
	
	rep(i, 0, n) printf("%d ", arr[i]);
	printf("\n");
}
 
int main()
{
	solve();
 
    return 0;
}
