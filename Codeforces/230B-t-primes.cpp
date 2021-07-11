/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 230B
	problem name: T-primes
	problem link: https://codeforces.com/problemset/problem/230/B

	Status: __Solved__
	Solved at: Jul/11/2021 10:15
*/

#include <iostream>
#include <math.h>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1000006

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

bool isNotPrime[MAX];

void sieve(){
	isNotPrime[0] = isNotPrime[1] = true;

	for(lli i=2; i*i <= 1000000; i++){
        if(!isNotPrime[i])
			for(lli j = i*i; j <= 1000000; j += i)
				isNotPrime[j] = true;
    }
}

void solve()
{
    int t;
    lli x;

    scanf("%d", &t);

    while(t--)
    {
        cin >> x;

        lli sqrtx = sqrt(x);

        if(x == 1)
            printf("NO\n");

        else if(sqrtx * sqrtx == x && !isNotPrime[sqrtx])
            printf("YES\n");

        else
            printf("NO\n");
    }
}

int main()
{
    sieve();

    solve();

    return 0;
}
