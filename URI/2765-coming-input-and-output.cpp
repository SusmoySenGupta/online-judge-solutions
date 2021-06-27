/* 
	problem no: 2765
	problem name: Coming Input and Output
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2765
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 12:14:41 AM
*/

#include <iostream>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	
	for(int i = 0; i < str.size(); i++)
	{
		
		if(str[i] == ',') cout << endl;
		
		else cout << str[i];
	}
	
	cout << endl;
	
	return 0;
}
