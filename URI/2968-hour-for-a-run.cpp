/* 
	problem no: 2968
	problem name: Hour for a Run
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2968
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 1:50:02 AM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int v, n;
	
	cin >> v >> n;
	
	for(int i = 1; i <= 8; i++)
	{
		cout << (long long int)ceil(v * n * ((i*10.0) / 100.0)) << " ";
	}
	
	cout << (long long int)ceil(v * n * 0.9) << endl;
	
	return 0;
}
