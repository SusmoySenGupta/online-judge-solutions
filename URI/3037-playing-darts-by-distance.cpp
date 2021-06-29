/* 
	problem no: 3037
	problem name: Playing Darts by Distance
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3037
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/29/21, 6:58:37 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, x, d, john_score, mary_score;
	
	cin >> t;
	
	while(t--)
	{
		john_score = 0, mary_score = 0;
		
		for(int i = 0; i < 3; i++)
		{
			cin >> x >> d;
			
			john_score += (x * d); 
		}
		
		for(int i = 0; i < 3; i++)
		{
			cin >> x >> d;
			
			mary_score += (x * d); 
		}
		
		john_score > mary_score ? cout << "JOAO\n" : cout << "MARIA\n"; 	
	}
	
	return 0;
}
