/* 
	problem no: 2764
	problem name: Date Input and Output
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2764
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 12:09:36 AM
*/

#include <iostream>

using namespace std;

int main()
{
	string str, val[5];
	
	cin >> str;
	
	for(int i = 0, j = 0; i < str.size(); i++)
	{
		if(str[i] == '/')
		{
			j++;
			
			continue;
		}
		
		val[j] += str[i];
	}
	
	
	cout << val[1] << "/" << val[0] << "/" << val[2] << endl;
	cout << val[2] << "/" << val[1] << "/" << val[0] << endl;
	cout << val[0] << "-" << val[1] << "-" << val[2] << endl;
	
	return 0;
}
