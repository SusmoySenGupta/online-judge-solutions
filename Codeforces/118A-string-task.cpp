/* 
	problem no: 118A
	problem name: String Task
	problem link: https://codeforces.com/problemset/problem/118/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/22/2021 01:45
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	char vow[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	for(int i=0; i<6; i++)
		s.erase(remove(s.begin(), s.end(), vow[i]), s.end());
	
	int len = s.length();
	
	for(int i=0; i<len; i++ )
	{
		cout<<"."<<s[i];
	}
	cout<<endl;
	
	return 0;	
}
