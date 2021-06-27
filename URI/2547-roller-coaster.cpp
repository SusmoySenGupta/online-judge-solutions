/* 
	problem no: 2547
	problem name: Roller Coaster
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2547
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 11:02:58 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, min, max, x;
	
	while( scanf("%d%d%d", &t, &min, &max) == 3)
	{
		int count = 0;
		
		while(t--)
		{
			cin >> x;
			
			if( x >= min && x <= max )
			{
				count++;
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}
