/* 
	problem no: 2791
	problem name: Bean
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2791
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 2:13:45 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int x, pos;
	
	for(int i = 1; i <= 4; i++) 
	{
		cin >> x;
		if(x) {
			pos = i;
		}
	}
	
	cout << pos << endl;
			
	return 0;
}
