/* 
	problem no: 3174
	problem name: Noel's Work Groups
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3174
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/21/21, 10:07:44 PM
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t, h, arr[5] = {0};
	string n, g;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n >> g >> h;
		
		if(g == "bonecos") 
			arr[0] += h;
		else if(g == "arquitetos")
			arr[1] += h;
		else if(g == "musicos") 
			arr[2] += h;
		else if(g == "desenhistas")
			arr[3] += h;
	}
	
	cout << (arr[0] / 8) + (arr[1] / 4) + (arr[2] / 6) + (arr[3] / 12) << endl;
		
	return 0;
}
