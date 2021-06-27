/* 
	problem no: 3224
	problem name: Aaah!
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3224
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/21/21, 10:19:51 PM
*/

#include <iostream>

using namespace std;

int main()
{
	string a, b;
	
	cin >> a >> b;
	
	if( a.size() < b.size())
		cout << "no" << endl;
	else
		cout << "go" << endl;
		
	return 0;
}
