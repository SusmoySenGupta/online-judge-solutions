/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 520A
	problem name: Pangram
	problem link: https://codeforces.com/problemset/problem/520/A

	Status: __Solved__
	Solved at: Jul/04/2021 18:33
*/

#include <iostream>
#include <cstring>

#define INF  (int)1e9
#define EPS   1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
	int n, freq[26] = {0};
	char ch;
	bool flag = true;
	
	scanf("%d", &n);
	getchar();
	
	rep(i, 0, n)
	{
		scanf("%c", &ch);
		
		freq[toupper(ch) - 'A']++;
	}
	
	rep(i, 0, 26)
	{
		if(freq[i] == 0)
		{
			flag = false;
			break;
		}
	}

	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
}

int main()
{
	solve();

    return 0;
}
