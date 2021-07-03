/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1542A
	problem name: Odd Set
	problem link: https://codeforces.com/contest/1542/problem/A

	Status: __Solved__
	Solved at: Jul/03/2021 19:34
*/

#include <iostream>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int main()
{
	int t, n, x;
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d", &n);
		
		int count = 0;
		
		rep(i, 0, n*2)
		{
			cin >> x;
			
			if(x % 2)
				count++;
		}
		
		if(count == n)
			printf("Yes\n");
		else
			printf("No\n");
	}

    return 0;
}
