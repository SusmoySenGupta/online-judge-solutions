/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: LightOJ
	problem no: discover-the-web
	problem name: Discover the web
	problem link: https://lightoj.com/problem/discover-the-web

	Status: ____
	Solved at: __
*/

#include <iostream>
#include <stack>

using namespace std;

#define ll long long int

stack<string> BACK;
stack<string> FORWARD;

void solve(int testCase)
{
    string command, url;

    FORWARD.push("http://www.lightoj.com/");

    cout << "Case " << testCase << ":\n";

    while (true)
    {
        cin >> command;

        string currentPage;

        if (command[0] == 'Q')
            return;

        else if (command[0] == 'V')
        {
            cin >> url;

            if (FORWARD.empty())
                cout << "Ignored\n";

            else
            {
                currentPage = FORWARD.top();
                FORWARD.pop();
                BACK.push(currentPage);

                FORWARD = stack<string>();

                FORWARD.push(url);
            }
        }

        else if (command[0] == 'B')
        {
            if (BACK.empty())
            {
                cout << "Ignored\n";
                continue;
            }

            currentPage = BACK.top();
            BACK.pop();
            FORWARD.push(currentPage);
        }

        else if (command[0] == 'F')
        {
            if (FORWARD.size() < 2)
            {
                cout << "Ignored\n";
                continue;
            }

            currentPage = FORWARD.top();
            FORWARD.pop();
            BACK.push(currentPage);
        }

        cout << FORWARD.top() << "\n";
    }
}

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
