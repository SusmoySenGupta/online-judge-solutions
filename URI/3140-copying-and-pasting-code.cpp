/* 
	problem no: 3140
	problem name: Copying and Pasting Code
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3140
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 1:03:27 PM
*/

#include <iostream>

using namespace std;

int main()
{
	string str, val[10005];
	bool flag = false;
	
	while(getline(cin, str))
	{
		if(str.find("<body>") != -1)
		{
			flag = true;
			
			continue;
		}
		else if(str.find("</body>") != -1)
		{
			flag = false;
			
			continue;
		}
		
		if(flag)
			cout << str << endl;
	}
	
	return 0;
}
