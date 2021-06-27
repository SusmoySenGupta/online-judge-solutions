/* 
	problem no: 1848
	problem name: Counting Crow
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1848
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 6:47:37 PM
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str;
	int sum = 0;
	
	while( getline(cin, str) )
	{
		if(str == "caw caw")
		{
			cout << sum << endl;
			
			sum = 0;
		}
		
		reverse(str.begin(), str.end());
		
		for(int i = 0; i < 3; i++)
		{
			if(i == 2 && str[i] == '*')
				sum++;
			if(str[i] == '*')
			{
				sum += (i + 1);
			}
		}
	}
	
	return 0;
}
