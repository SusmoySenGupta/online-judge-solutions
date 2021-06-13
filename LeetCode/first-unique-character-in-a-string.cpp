/* 
	author: Susmoy Sen Gupta
	problem link: https://leetcode.com/problems/first-unique-character-in-a-string/
    Runtime: 20ms
*/
#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
   int arr[26] = {0};
   int len = s.length();
    for(int i = 0; i < len; ++i)
        arr[ s[i] - 'a' ]++;
    
    for(int i = 0; i < len; ++i)
        if( arr[ s[i] - 'a' ] == 1)
            return i;
    return -1;
}

int main()
{
	string s;
	cin>>s;
	cout<<firstUniqChar(s)<<endl;
	
	return 0;
}
