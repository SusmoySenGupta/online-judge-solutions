/* 
	problem no: 3040
	problem name: Copying and Pasting Code
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3040
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 1:25:40 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, a, b, c;
	
	cin >> t;
	
	while(t--)
	{
		cin >> a >> b >> c;
		
		if(a >= 200 && a <= 300 && b >= 50 && c >= 150 ) 
			cout << "Sim" << endl;
		
		else	
			cout << "Nao" << endl;
	}
	
	return 0;
}
