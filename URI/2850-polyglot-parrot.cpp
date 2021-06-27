/* 
	problem no: 2850
	problem name: Polyglot Parrot
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2850
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 2:00:43 AM
*/

#include <iostream>

using namespace std;

int main()
{
	string str;
	
	while(getline(cin,str)) 
	{
		if(str == "esquerda") cout << "ingles" << endl;
	
		else if(str == "direita") cout << "frances" << endl;
			
		else if(str == "nenhuma") cout << "portugues" << endl;
		
		else if(str == "as duas") cout << "caiu" << endl;
	}
			
	return 0;
}
