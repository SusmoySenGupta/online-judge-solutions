/* 
	problem no: 2763
	problem name: CPF Input and Output
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2763
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 11:51:54 PM
*/

#include <iostream>

using namespace std;

int main()
{
	string str;
	
	cin >> str;
	
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
			cout << str[i];
		else 
			cout << endl;
	}
	
	cout << endl;
	
	return 0;
}
