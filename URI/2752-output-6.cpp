/* 
	problem no: 2752
	problem name: Output 6
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2752
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 2:57:06 PM
*/

#include <iostream>

using namespace std;

int main()
{
	string str = "AMO FAZER EXERCICIO NO URI";
	
	printf("<% s>\n", str.c_str());
	
	printf("<% 30s>\n", str.c_str());
	
	printf("<% .20s>\n", str.c_str());
	
	printf("<% -20s>\n", str.c_str());
	
	printf("<% -30s>\n", str.c_str());
	
	printf("<% .30s>\n", str.c_str());

	printf("<% 30.20s>\n", str.c_str());

	printf("<% -30.20s>\n", str.c_str());
	 
	return 0;
}
