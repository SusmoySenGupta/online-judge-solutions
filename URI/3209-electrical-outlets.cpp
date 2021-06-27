/* 
	problem no: 3209
	problem name: Electrical Outlets
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3209
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/21/21, 10:37:25 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, n, x, sum;
	
	cin >> t;
	
	while(t--)
	{
		sum = 0;
		
		cin >> n;
		
		for(int i = 0; i < n; i++) 
		{
			cin >> x;
			
			sum += x;
		}
		
		cout << (sum - n) + 1 << endl;
		
	}
		
	return 0;
}
