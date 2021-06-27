/* 
	problem no: 2143
	problem name: The Return of Radar
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2143
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 12:35:28 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, x;
	
	while(1)
	{
		cin >> t;
		
		if(t == 0) break;
		
		while(t--)
		{
			cin >> x;
			
			x % 2 == 0 ? cout << (x * 2) - 2 : cout << (x*2) - 1;	
			
			cout << endl;
				
		}
	}
	
	 
	return 0;
}
