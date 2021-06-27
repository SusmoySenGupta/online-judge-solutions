/* 
	problem no: 2727
	problem name: Secret Code
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2727
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 1:17:46 PM
*/

#include <iostream>

using namespace std;

int countSpaces(string str)
{
	int count = 0;
	
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == ' ')
			count++;
	}
	
	return count;
}

int getLetter(string str)
{
	int letter = 0;
	
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == ' ') 
			break;
		
		letter++;
	}
	
	return letter;
}

int main()
{
	int t;
	string str;
	
	while(cin >> t)
	{
		getchar();
		
		while(t--)
		{
			getline(cin, str);	
			
			int space = countSpaces(str);
			
			int letter = getLetter(str);
			
			printf("%c\n", 96 + space + letter + (2 * space) );
		}
	}
	
	return 0;
}
