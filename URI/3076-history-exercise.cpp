/* 
	problem no: 3076
	problem name: History Exercise
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3076
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/29/21, 8:10:25 PM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x;
	
	while( scanf("%lf", &x) == 1)
	{
		printf("%d\n", (int)ceil(x / 100.0) );
	}
	
	return 0;
}
