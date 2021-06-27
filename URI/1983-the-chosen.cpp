/* 
	problem no: 1983
	problem name: The Chosen
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1983
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/23/21, 9:26:58 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t;
	string reg, res;
	double max = -1, n;
	
	cin >> t;
	 
	while(t--)
	{
		cin >> reg >> n;
		
		if( n > max)
		{
			max = n;
			
			res = reg;
		}
	}
	
	if(max < 8.0)
		cout << "Minimum note not reached" << endl;
	
	else
		cout << res << endl;
	
	return 0;
}
