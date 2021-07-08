/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 443A
	problem name: Anton and Letters
	problem link: https://codeforces.com/problemset/problem/443/A

	Status: __Solved__
	Solved at: Jul/08/2021 13:39
*/

#include <iostream>
#include <string>
#include <cstring>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{
    char ch[MAX];
    int arr[26] = {0}, count = 0;

    cin.getline(ch, MAX);

    int len = strlen(ch);

    rep(i, 1, len - 1) {
        if(isalpha(ch[i]))
            arr[ch[i] - 'a']++;
    }

    rep(i, 0, 26) {
        if (arr[i])
            count++;
    }

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
