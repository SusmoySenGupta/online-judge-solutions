/* 
	problem no: 1112A
	problem name: Petya and Strings
	problem link: https://codeforces.com/problemset/problem/112/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/13/2021 10:50
*/

#include<iostream>

using namespace std;

int main()
{
	string S1, S2;
	cin >> S1 >> S2;
	
	for(int i=0; i < S1.length(); i++)
	{
		int check1 = tolower(S1[i]);
		int check2 = tolower(S2[i]);
		
		if(check1 < check2)
		{
			printf("-1\n");
			return 0;
		}
		else if(check1 > check2)
		{
			printf("1\n");
			return 0;
		}
	}
	
	printf("0\n");
	
	return 0;
}
