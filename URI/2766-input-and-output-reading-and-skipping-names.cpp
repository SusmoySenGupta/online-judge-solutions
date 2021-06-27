/* 
	problem no: 2766
	problem name: Input and Output Reading and Skipping Names
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2766
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 12:19:25 AM
*/

#include <iostream>

using namespace std;

int main()
{
	string str[15];
	
	for(int i = 0; i < 10; i++)
		cin >> str[i];
	
	
	cout << str[2] << endl << str[6] << endl << str[8] << endl;
	
	return 0;
}
