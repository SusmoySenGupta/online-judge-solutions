/* 
	problem no: 56A
	problem name: Bar
	problem link: https://codeforces.com/problemset/problem/56/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/25/2021 10:25
*/
#include<bits/stdc++.h>
using namespace std;

bool isNumber(string str){
	for(int i=0; i<str.size(); i++)
		if (isdigit(str[i]) == false) return false;
	return true;
}

bool isAlcohol(vector<string> alcohols, string str){
	for(int i=0; i<alcohols.size(); i++) 
		if(alcohols[i] == str)  return true;
	
	return false;
}

int main()
{
	vector<string>alcohols = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"}; 
	int t, count = 0;
	string str;
	cin>>t;
	while(t--) {
		cin>>str;
		if((isNumber(str) &&stoi(str) < 18) || isAlcohol(alcohols, str)) count++;
	}
	cout<<count<<endl;
	return 0;
}
