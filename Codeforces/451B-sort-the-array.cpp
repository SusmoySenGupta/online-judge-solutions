/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 451B
	problem name: Sort the Array
	problem link: https://codeforces.com/problemset/problem/451/B

	Status: __Solved__
	Solved at: Aug/08/2021 11:46
*/

#include <iostream>
#include <algorithm>

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
    int n, arr[MAX], chq[MAX], start = 0, end = 0;
	bool flag = true;
	
	scanf("%d", &n);
	
	rep(i, 0, n){ scanf("%d", &arr[i]); chq[i] = arr[i];}
	
	rep(i, 0, n-1) if(arr[i] > arr[i+1]) { start = i+1; break;}
	per(i, 1, n) if(arr[i] < arr[i-1]) { end = i + 1; break;}
	
	sort(chq, chq + n);
	
	int k = 0;
	rep(i, 0, n)
	{
		if(i >= start-1 && i <= end-1)
		{
			if(arr[i] != chq[(end-1) - k++]) { flag = false; break; }
		}
		else
		{
			if(arr[i] != chq[i]) { flag = false; break; }
		}
 
	}
	
	if(flag)
		printf("yes\n%d %d\n", start==0 ? 1:start, end==0 ? 1:end);
	else
		printf("no\n");
}

int main()
{
	solve();

    return 0;
}
