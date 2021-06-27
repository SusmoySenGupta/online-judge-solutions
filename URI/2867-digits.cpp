/* 
	problem no: 2867
	problem name: Digits
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2867
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 6:39:09 PM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{	
	int t, x, y;
	
	cin >> t;
	
	while(t--)
	{
		cin >> x >> y;
		
		cout << (int)( y * log10(x) ) + 1 << endl;
	}
	
	return 0;
}
