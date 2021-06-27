/* 
	problem no: 2344
	problem name: Notas da Prova
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2344
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 3:32:23 PM
*/

#include <iostream>

using namespace std;

int main()
{	
	int x;
	
	cin >> x;
	
	if(x == 0) printf("E\n");
	else if(x >= 1 && x <= 35) printf("D\n");
	else if(x >= 36 && x <= 60) printf("C\n");
	else if(x >= 61 && x <= 85) printf("B\n");
	else if(x >= 86 && x <= 100) printf("A\n");
	
	return 0;
}
