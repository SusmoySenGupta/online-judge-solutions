/* 
	problem no: 3039-santas-toys
	problem name: Santa's Toys
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/3039
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/25/21, 8:02:47 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t, countMale = 0, countFemale = 0;
	
	char n[1005], c;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n >> c;
		
		if(c == 'M') countMale++;
		else countFemale++;
	}
	
	cout << countMale << " carrinhos" << endl << countFemale << " bonecas" << endl;
	
	return 0;
}
