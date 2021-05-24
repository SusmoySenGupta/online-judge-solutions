/* 
	problem no: 131A
	problem name: cAPS lOCK
	problem link: https://codeforces.com/problemset/problem/131/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/21/2021 21:19
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int count = 0;
	bool con_1 = false, con_2 = false;
	cin>>s;
	int len = s.length();
	
	if(len == 1) {
		if( isupper(s[0]) ){
			s[0] = tolower(s[0]);
		}
		else {
			s[0] = toupper(s[0]);
		}
		cout<< s << endl;
		return 0;
	}
	else if(len > 1) {
		for(int i=1; i<len; i++) {
			if( islower(s[0]) && isupper(s[i]) )
				con_1 = true;
			else {
				con_1 = false;
				break;
			}
		}
		
		for(int i=0; i<len; i++) {
			if(isupper(s[i]))
				count++;
		}
		
		if(count == len) 
			con_2 = true;
	}

	
	if(con_1 || con_2) {
		for(int i=0; i<len; i++){
			if( isupper(s[i]) ){
				s[i] = tolower(s[i]);
			}
			else {
				s[i] = toupper(s[i]);
			}
			cout<<s[i];	
		}
		cout<<endl;
	}
	
	else {
		cout<<s<<endl;
	}
	
	return 0;
}
