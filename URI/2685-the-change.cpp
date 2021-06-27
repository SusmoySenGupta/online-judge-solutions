/* 
	problem no: 2685
	problem name: The Change
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2685
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 11:47:15 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	
	while( scanf("%d", &n) == 1)
	{
		
		if( (n >= 0 && n < 90) || n == 360)
			cout << "Bom Dia!!" << endl;
			
		else if(n >=  90 && n < 180)
			cout << "Boa Tarde!!" << endl;
		
		else if(n >= 180 && n < 270)
			cout << "Boa Noite!!" << endl;
		
		else if(n >= 270 && n < 360)
			cout << "De Madrugada!!" << endl;
	}
	
	return 0;
}
