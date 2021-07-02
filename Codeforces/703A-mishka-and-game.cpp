/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 703A
	problem name: Mishka and Game
	problem link: https://codeforces.com/problemset/problem/703/A

	Status: __Solved__
	Solved at: Jul/02/2021 14:42
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

void solve()
{
	int n, m, c, m_score = 0, c_score = 0;
	
	cin >> n;
	
	while(n--)
	{
		cin >> m >> c;
		
		if(m > c) m_score++;
		else if(c > m) c_score++;
	}
	
	if(m_score == c_score)
		cout << "Friendship is magic!^^" << endl;
	else
		m_score > c_score ? cout << "Mishka" << endl : cout << "Chris" << endl;
}

int main()
{
	solve();
	
    return 0;
}
