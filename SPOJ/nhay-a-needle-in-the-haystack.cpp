/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: SPOJ
	problem name: NHAY - A Needle in the Haystack
	problem link: https://www.spoj.com/problems/NHAY/

	Status: __Accepted__
	Solved at: 2021-11-08 05:18:41
*/

#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000000007ll
#define BASE 89
#define ll long long int

vector<ll> prefixHash;
vector<ll> power;

/* Makes prefix-hash */
void pre(string &str)
{
    power.push_back(1);

    for (int i = 1; i < str.size(); i++)
    {
        power.push_back((power[i - 1] * BASE) % MOD);
    }

    prefixHash.push_back(str[0]);

    for (int i = 1; i < str.size(); i++)
    {
        prefixHash.push_back((prefixHash[i - 1] * BASE + str[i]) % MOD);
    }
}

/* Gets hash value for a given range */
ll get_hash(int L, int R)
{
    if (!L)
        return prefixHash[R];

    return (prefixHash[R] - (prefixHash[L - 1] * power[R - L + 1] % MOD) + MOD) % MOD;
}

/* Makes hash */
ll make_hash(string &str)
{
    ll hashed = 0;

    for (auto s : str)
    {
        hashed = ((hashed * BASE) + s) % MOD;
    }

    return hashed;
}

int main()
{
    int n, count;
    string needle, heystack;

    while (cin >> n)
    {
        cin >> needle >> heystack;

        prefixHash.clear();
        power.clear();

        pre(heystack);

        count = 0;
        ll hashed_needle = make_hash(needle);

        for (int i = 0; i + n <= heystack.size(); i++)
        {
            ll hashed_value = get_hash(i, i + n - 1);

            if (hashed_value == hashed_needle)
                cout << i << "\n";
        }

        cout << "\n";
    }

    return 0;
}