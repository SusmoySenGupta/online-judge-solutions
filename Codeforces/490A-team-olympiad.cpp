/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 490A
	problem name: Team Olympiad
	problem link: https://codeforces.com/problemset/problem/490/A

	Status: __Solved__
	Solved at: Jul/22/2021 11:00
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

void solve()
{
    int n, arr[5003], freq[5]={0}, min_val;

    scanf("%d", &n);

    rep(i, 0, n) 
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    min_val = min(min(freq[1], freq[2]), freq[3]);

    printf("%d\n", min_val);

    rep(i, 0, min_val) 
    {
        rep(j, 1, 4)
        {
            rep(k, 0, n)
            {
                if(arr[k] == j)
                {
                    arr[k] = -1;
                    printf("%d ", k+1);
                    break;
                }
            }
        }
        printf("\n");
    }
}

int main()
{
	solve();

    return 0;
}
