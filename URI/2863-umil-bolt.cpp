/* 
	problem no: 2863
	problem name: Umil Bolt
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2863
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 2:07:16 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t;
	
	double x, min;
	
	while(cin >> t)
	{
		min = 12;
		
		while(t--)
		{
			cin >> x;
			
			if(x < min)
			{
				min = x;
			}	
		}
		
		cout << min << endl;
	}
	
	
	return 0;
}
