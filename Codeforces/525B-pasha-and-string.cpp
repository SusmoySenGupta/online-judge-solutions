/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 525B
	problem name: Pasha and String
	problem link: https://codeforces.com/problemset/problem/525/B

	Status: __Accepted__
	Solved at: Nov/06/2021 18:25
*/

#include <iostream>
#include <map>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 500005

#define lli long long int

#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)

using namespace std;

void solve()
{
	string str;
    int m, n, ele[MAX], sum = 0;
    
	cin >> str >> m;
	
	while(m--)
	{
		cin >> n; ele[n]++;
	}

	for(int i = 1; 2*i <= str.size(); i++)
	{
		sum += ele[i];
		if(sum % 2) swap(str[i-1], str[str.size() - i]);
	}
	
	cout << str << endl;
}

int main()
{
    solve();
}
