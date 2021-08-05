/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 160A
	problem name: Twins
	problem link: https://codeforces.com/problemset/problem/160/A

	Status: __Solved__
	Solved at: Aug/03/2021 10:03
*/

#include <iostream>
#include <algorithm>

#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007ll
#define PI 3.14159

#define lli long long int

#define rep(i, a, n) for (int i=a; i<n; i++)
#define per(i, a, n) for (int i=n-1; i>=a; i--)

using namespace std;

void solve()
{   
    int n, arr[102], sum = 0;

    scanf("%d", &n);

    rep(i, 0, n)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    sort(arr, arr + n);

    int temp_sum = 0, count = 1;

    per(i, 0, n)
    {
        temp_sum += arr[i];

        if(sum - temp_sum < temp_sum) break;

        count++;
    }

    printf("%d\n", count);
}

int main()
{
	solve();

    return 0;
}
