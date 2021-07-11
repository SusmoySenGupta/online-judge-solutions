/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 199A
	problem name: Hexadecimal's theorem
	problem link: https://codeforces.com/problemset/problem/199/A

	Status: __Solved__
	Solved at: Jul/11/2021 11:20
*/

#include <iostream>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

lli fibos[50]={0, 1, 1};

void generatFibo()
{
    for (int i = 3; i < 45; i++) {
        fibos[i] = fibos[i-2] + fibos[i-1];
    }
}

int search(lli target)
{
	rep(i, 0, 45) {
        if(fibos[i] == target)
            return i;
    }

    return -1;
}

void solve()
{
    lli n;

    cin >> n;

    if(n == 0)
        printf("0 0 0\n");
    else if(n == 1)
        printf("0 0 1\n");
    else {
        lli pos = search(n);

        cout << 0 << " ";
        cout << fibos[pos - 2] << " " << fibos[pos - 1] << endl;
    }
}

int main()
{
    generatFibo();

	solve();

    return 0;
}
