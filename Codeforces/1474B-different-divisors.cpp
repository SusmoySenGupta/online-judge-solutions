/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1474B
	problem name: Different Divisors
	problem link: https://codeforces.com/problemset/problem/1474/B

	Status: ____
	Solved at: __
*/

#include <iostream>
#include <vector>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1000006

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

bool is_composite[MAX + 5];
vector<int> primes;

void sieve()
{
    for(int i = 2; i * i <= MAX; i++)
    {
        if(!is_composite[i]) 
            for(int j = i*i; j <= MAX; j += i) { is_composite[j] = true; }
    }
}

void makePrime()
{
    rep(i, 2, MAX + 1) 
        if(!is_composite[i]) primes.push_back(i);
}

void solve()
{
    rep(i, 0, 50)
        cout << primes[i] << " ";
    cout << "\n" << primes.size();
}

int main()
{
    sieve();
    makePrime();

	solve();

    return 0;
}
