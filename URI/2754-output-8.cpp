/* 
	problem no: 2754
	problem name: Output 8
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2754
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 3:08:46 PM
*/

#include <iostream>

using namespace std;

int main()
{
	double a = 234.345, b = 45.698;
	
	printf("%.6f - %.6f\n", a, b);
	
	printf("%.0f - %.0f\n", a, b);
	
	printf("%.1f - %.1f\n", a, b);
	
	printf("%.2f - %.2f\n", a, b);
	
	printf("%.3f - %.3f\n", a, b);
	
	printf("%e - %e\n", a, b);
	
	printf("%E - %E\n", a, b);
	
	printf("%g - %g\n", a, b);
	
	printf("%g - %g\n", a, b);
	 
	return 0;
}
