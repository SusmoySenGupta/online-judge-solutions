/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 887A
	problem name: Div. 64
	problem link: https://codeforces.com/problemset/problem/887/A

	Status: __Solved__
	Solved at: Aug/16/2021 23:46
*/

#include <iostream>
#include <cstring>
 
#define INF  (int)1e9
#define EPS   1e-9
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
	
	scanf("%s", ch);
	
	int len = strlen(ch), pos = -1, count = 0;
	
	rep(i, 0, len) if(ch[i] == '1') {pos = i; break;}
	
	if(pos != -1) rep(i, pos, len) if(ch[i] == '0') count++;
	
	count >= 6 ? printf("yes\n") : printf("no\n");
}
 
int main()
{
	solve();
 
    return 0;
}