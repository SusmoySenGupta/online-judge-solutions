/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1216A
	problem name: Prefixes
	problem link: https://codeforces.com/problemset/problem/1216/A

	Status: ____
	Solved at: __
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1000003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    int n, count = 0;
    string s;

    cin >> n >> s;

    for(int i = 1; i < s.size(); i += 2)
    {
        if(s[i] == 'a' && s[i-1] == 'a') 
        { 
            s[i-1] = 'b'; 
            count++; 
        }

        else if(s[i] == 'b' && s[i-1] == 'b') 
        { 
            s[i-1] = 'a'; 
            count++; 
        }
    }

    cout << count << "\n" << s << "\n";
}

int main()
{
	solve();

    return 0;
}
