/* 
	problem no: 2936
	problem name: How Much Cassava?
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2936
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/22/21, 6:54:55 PM
*/

#include <iostream>

using namespace std;

int main()
{	
	int arr[5] = {300, 1500, 600, 1000, 150}, x, sum = 0;
	
	for(int i = 0; i < 5; i++)
	{
		cin >> x;
		
		sum += (x * arr[i]);
	}
	
	cout << sum + 225 << endl;
	
	return 0;
}
