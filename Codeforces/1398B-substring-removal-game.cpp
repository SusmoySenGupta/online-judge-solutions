/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 1398B
	problem name: Substring Removal Game
	problem link: https://codeforces.com/problemset/problem/1398/B

	Status: __Solved__
	Solved at: Aug/14/2021 10:22
*/

#include <iostream>
#include <cstring>
#include <algorithm>

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
    int arr[MAX];

    scanf("%s", ch);

    int len = strlen(ch), k = 0;

    rep(i, 0, len)
    {
        if(ch[i] == '1')
        {
            int count = 0;

            rep(j, i, len)
            {
                if(ch[j] == '0') break;

                count++; i++;
            }

            arr[k++] = count;
        }
    }

    sort(arr, arr + k, greater<int>());

    int res = 0;

    for(int i = 0; i < k; i++) if(i%2 == 0) res += arr[i];

    printf("%d\n", res);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--) solve();

    return 0;
}
