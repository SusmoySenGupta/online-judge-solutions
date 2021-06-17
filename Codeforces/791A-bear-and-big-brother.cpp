/* 
	problem no: 791A
	problem name: Bear and Big Brother
	problem link: https://codeforces.com/problemset/problem/791/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/17/2021 10:54
*/
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int a, b, count = 0;
    
    cin >> a >> b;
	
	while(a <= b)
	{
		count++;
		a *= 3;
		b *= 2;
	}
	
	cout << count << endl;

    return 0;
}
