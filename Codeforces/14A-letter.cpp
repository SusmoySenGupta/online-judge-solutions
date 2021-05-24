/* 
	problem no: 14A
	problem name: Letter
	problem link: https://codeforces.com/contest/14/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Mar/29/2020 14:50
*/
#include<bits/stdc++.h>
using namespace std;
#define long long ll
#define array arr
int main()
{
	int n,m;
	cin >> n >> m;
	char a[n][m];
	int min_i = n, max_i = -1, min_j = m, max_j = -1;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}

	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if( a[i][j] == '*' )
			{
				if( i < min_i ) min_i = i;
				if( i > max_i ) max_i = i;
				if( j < min_j ) min_j = j;
				if( j > max_j ) max_j = j;
			}
		}
	}
	
	for(int i = min_i; i <= max_i; ++i)
	{
		for(int j = min_j; j <= max_j; ++j)
		{
			cout << a[i][j];
		}
		cout << "\n";
	}
	
	 
	return 0;
}
