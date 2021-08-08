/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 456A
	problem name: Laptops
	problem link: https://codeforces.com/problemset/problem/456/A

	Status: __Solved__
	Solved at: Aug/08/2021 11:43
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 100005

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

struct laptops{
    int price;
    int quality;
};

bool comparePrice(laptops a, laptops b)
{
    if(a.price < b.price) return true;
    
    return false;
}

void solve()
{
    laptops L[MAX];
    int n;

    scanf("%d", &n);

    rep(i, 0, n) scanf("%d %d", &L[i].price, &L[i].quality);

    sort(L, L + n, comparePrice);

    rep(i, 0, n-1)
    {
        if(L[i].price < L[i+1].price && L[i].quality > L[i+1].quality)
        {
            printf("Happy Alex\n");
            return;
        }
    }

    printf("Poor Alex\n");
}

int main()
{
	solve();

    return 0;
}
