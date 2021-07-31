/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 988A
	problem name: Diverse Team
	problem link: https://codeforces.com/problemset/problem/988/A

	Status: __Solved__
	Solved at: Jul/31/2021 10:21
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
	int n, k, arr[MAX], chq[MAX] = {0}, count = 0;
	
	scanf("%d%d", &n, &k);
	
	rep(i, 1, n+1)
	{
		scanf("%d", &arr[i]);
		
		chq[arr[i]] = i;
	}
	
	rep(i, 1, MAX) if(chq[i] > 0) count++;
	
	if(count < k) printf("NO\n");
	
	else
	{
		printf("YES\n");
		
		for(int i=1, j=1; j <= k; i++)
		{
			if(chq[i] != 0)
			{
				printf("%d ", chq[i]);
				j++;
			}
		}
		
		printf("\n");
	}
}

int main()
{
	solve();

    return 0;
}
