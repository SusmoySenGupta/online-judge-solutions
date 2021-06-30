/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1030A
	problem name: In Search of an Easy Problem
	problem link: https://codeforces.com/problemset/problem/1030/A

	Status: __Solved__
	Solved at: Jul/01/2021 01:16
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
	int t, x;
	bool isHard = false;
	
	cin >> t;

	while(t--)
	{
		cin >> x;
		
		if(x)
			isHard = true;
	}

	if(isHard)
		cout << "HARD" << endl;
		
	else
		cout << "EASY" << endl;
		
    return 0;
}

