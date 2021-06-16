/* 
	problem no: 59A
	problem name: Word
	problem link: https://codeforces.com/problemset/problem/59/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/17/2021 01:11
*/
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char str[105];
    int countSmall = 0;
    
	cin >> str;
    
	for(int i = 0; i < strlen(str); i++){
		if(islower(str[i]))
			countSmall++;
	}
	
	if(countSmall < strlen(str) - countSmall) 
		cout << strupr(str) << endl;
	
	else
		cout << strlwr(str) << endl;
    
    return 0;
}
