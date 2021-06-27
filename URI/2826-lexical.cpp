/* 
	problem no: 2826
	problem name: Lexical
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2826
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 1:59:35 AM
*/

#include <iostream>

using namespace std;

int main()
{
	string a, b;
	
	cin >> a >> b;
	
	if( a > b)
		cout << b << endl << a << endl;
	
	else
		cout << a << endl << b << endl;
	
	return 0;
}
