/* 
	problem no: 3170
	problem name: Christmas Balls
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3170
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/21/21, 9:49:45 PM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, x;
	
	cin >> a >> b;
	
	x = b / 2;
	
	if(x > a)
		printf("Faltam %d bolinha(s)\n", x - a);
	else
		printf("Amelia tem todas bolinhas!\n");
		
		
	return 0;
}
