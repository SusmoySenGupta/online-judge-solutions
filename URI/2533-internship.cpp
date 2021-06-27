/* 
	problem no: 2533
	problem name: Internship
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2533
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 12:59:07 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, x, y;
	
	while( cin >> t )
	{
		long long int ncSum = 0, cSum = 0;
		
		while(t--)
		{
			cin >> x >> y;
			
			ncSum += (x * y);
			
			cSum += y;
		}
		
		printf( "%.4f\n", ncSum / (cSum * 100.0) );
	}
	
	return 0;
}
