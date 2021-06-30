/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1352A
	problem name: Sum of Round Numbers
	problem link: https://codeforces.com/problemset/problem/1352/A

	Status: __Solved__
	Solved at: Jun/30/2021 21:03
*/

#include <bits/stdc++.h>
#include <math.h>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int main()
{
	int t, x;
	
	cin >> t;
	
	while(t--)
	{
		cin >> x;
		
		vector <int> digits;
		int zeros = 0;
		
		while(x != 0)
		{
			digits.push_back(x % 10);
			
			x /= 10;
		}
		
		rep(i, 0, digits.size())
			if(!digits[i])
				zeros++;
		
		printf("%d\n", digits.size() - zeros);
				
		rep(i, 0, digits.size())
		{
			if(digits[i])
				printf( "%d ", digits[i] * (int) pow(10, i)) ;
		}
		
		printf("\n");
	}

    return 0;
}

