/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 32B
	problem name: Borze
	problem link: https://codeforces.com/problemset/problem/32/B

	Status: __Accepted__
	Solved at: Nov/14/2021 01:26
*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 1003

#define ll long long int

int main()
{
    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            cout << 0;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1; i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << 2; i++;
        }
    }

    cout << "\n";

    return 0;
}
