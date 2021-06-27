/* 
	problem no: 1914
	problem name: Whose Turn Is It?
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1914
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/23/21, 7:56:16 PM
*/

#include <iostream>

using namespace std;

int main()
{
	string saidPar, saidImpar, name, value;
	int t;
	long long int a, b;
	
	cin >> t;
	
	while(t--)
	{
		
		for(int i = 1; i <= 2; i++)
		{
			cin >> name >> value;
			
			if(value == "PAR") saidPar = name;
			else saidImpar = name;
		}
		
		cin >> a >> b;
		
		if( (a+b) % 2 )
			cout << saidImpar << endl;
		else 
			cout << saidPar << endl;
	}
	 
	return 0;
}
