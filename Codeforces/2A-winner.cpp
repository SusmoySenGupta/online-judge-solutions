/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Codeforces
	problem no: 2A
	problem name: Winner
	problem link: https://codeforces.com/problemset/problem/2/A

	Status: ____
	Solved at: __
*/

#include <iostream>
#include <map>
#include <queue>

#define INF (int)1e9
#define EPS (int)1e-9
#define MOD 1000000007ll
#define PI 3.14159
#define MAX 1003

#define lli long long int

using namespace std;

struct NameWithScore
{
    string name;
    int score;
};

map<string, vector<int>> nameScores;
map<string, int> nameMaxScore;
int maxScore = EPS;

void solve()
{
    int n, x;
    struct NameWithScore nameWithScore[MAX];
    string s;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        cin >> s >> x;

        nameWithScore[i].name = s;
        nameWithScore[i].score = x;

        nameScores[s] += x;
    }

    for(int i = 0; i < n; i++) 
    { 
        maxScore = max(maxScore, nameScores[nameWithScore[i].name]); 
    }

    for (int i = 0; i < n; i++)
    {
        if(nameWithScore[i].score >= maxScore && nameScores[nameWithScore[i].name] == maxScore)
        {
            cout << nameWithScore[i].name << "\n";
            break;
        }
    }
    
}

int main()
{
	solve();

    return 0;
}
