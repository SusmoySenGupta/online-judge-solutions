/* 
	problem no: 2759
	problem name: Input and Output Character
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2759
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 7:22:52 PM
*/

#include <iostream>

using namespace std;

int main()
{
	char a, b, c;
	
	cin >> a >> b >> c;
	
	printf("A = %c, B = %c, C = %c\n", a, b, c);
	
	printf("A = %c, B = %c, C = %c\n", b, c, a);
	
	printf("A = %c, B = %c, C = %c\n", c, a, b);
	
	return 0;
}
