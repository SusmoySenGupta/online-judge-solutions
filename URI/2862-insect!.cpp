/* 
	problem no: 2862
	problem name: Insect!
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2862
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 1:37:04 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t;
	long long int n;
	
	cin >> t;

	while(t--)
	{	
		cin >> n;
		
		if( n > 8000) 
			cout << "Mais de 8000!" << endl;
		else 
			cout << "Inseto!" << endl;	
	}
			
	return 0;
}
