/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 320A
	problem name: Magic Numbers
	problem link: https://codeforces.com/problemset/problem/320/A

	Status: __Solved__
	Solved at: Jul/14/2021 00:51
*/

#include <iostream>
#include <cstring>
#include <string>

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
    string num;
    char temp[11];

    scanf("%s", temp);
    num = temp;

    if(num[0] != '1') {
        printf("NO\n");
    }

    else
    {
        while(true)
        {
            int pos = -1;

            if (num.find("144") != string::npos)
            {
                pos = num.find("144");
                rep(i, 0, 3) num[pos + i] = 'x';
                continue;
            }

            else if(num.find("14") != string::npos)
            {
                pos = num.find("14");
                rep(i, 0, 2) num[pos + i] = 'x';
                continue;
            }

            else if(num.find("1") != string::npos)
            {
                pos = num.find("1");
                num[pos] = 'x';
                continue;
            }

            else
            {
                rep(i, 0, num.size()) 
                {
                    if(num[i] != 'x') {
                        printf("NO\n");
                        return;
                    }
                }

                printf("YES\n");
                break;
            }
        }
    }
}

int main()
{
	solve();

    return 0;
}
