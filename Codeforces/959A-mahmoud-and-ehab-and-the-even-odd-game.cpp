/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 959A
	problem name: Mahmoud and Ehab and the even-odd game
	problem link: https://codeforces.com/problemset/problem/959/A

	Status: __Solved__
	Solved at: Jul/01/2021 14:58
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
	int n;
	
	cin >> n;
	
	n % 2 ? cout << "Ehab" << endl : cout << "Mahmoud" << endl;

    return 0;
}

