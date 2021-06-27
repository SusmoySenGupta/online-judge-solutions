/* 
	problem no: 3241
	problem name: Help a PhD candidate out!
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3241
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 1:26:08 AM
*/

#include <iostream>
#include <string.h>

using namespace std;

int convertAndSum(string str) 
{
	string s1, s2;
	bool found = false;
	
	for(int i = 0; i < str.size(); i++) {
		
		if(str[i] == '+') {
			found = true;
			continue;
		}
		
		if(!found) {
			s1 += str[i];
		} else {
			s2 += str[i];
		}
	}
	
	return stoi(s1) + stoi(s2);
}

int main()
{
	int t;
	string str;
	
	cin >> t;
	
	while(t--)
	{
		cin >> str;
	
		if( str == "P=NP" ) {
			cout << "skipped" << endl;	
		} else {
			cout << convertAndSum(str) << endl;
		}	
	}
			
	return 0;
}
