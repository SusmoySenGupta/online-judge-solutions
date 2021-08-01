/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 78A
	problem name: Haiku
	problem link: https://codeforces.com/problemset/problem/78/A

	Status: __Solved__
	Solved at: Aug/01/2021 10:29
*/

#include <iostream>
#include <string>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 102

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

int countVowel(string str) 
{
    int count = 0; 

    rep(i, 0 , str.size())
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;

    return count;
}

void solve()
{
    string str;
    int chq[3] = {5, 7, 5}, flag = 1;

    rep(i, 0, 3)
    {
        getline(cin, str);

        if(countVowel(str) != chq[i]) flag = 0;
    }

    flag ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
	solve();

    return 0;
}
