/* 
	problem no: 1847
	problem name: Welcome to the Winter!
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1847
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/20/21, 8:17:33 PM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if ( a < b && b >= c )
		cout << ":(" << endl;
		
	else if ( a < b && b < c && (c - b) < (b - a) )
		cout << ":(" << endl;

	else if ( a < b && b < c && (c - b) >= (b - a)  )
		cout << ":)" << endl;
	
	else if ( a > b && b > c && (b - c) < (a - b) )
		cout << ":)" << endl;
	
	else if ( a > b && b > c && (b - c) >= (a - b) )
		cout << ":(" << endl;
	
	else if ( a == b && b < c)
		cout << ":)" << endl;
	
	else if ( a == b && b > c )
		cout << ":(" << endl;

	else if ( a > b && b <= c )
		cout << ":)" << endl;
	 
	else
        cout << ":(" << endl;
	
	
	return 0;
}
