/* 
	problem no: 116A
	problem name: Tram
	problem link: https://codeforces.com/problemset/problem/116/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/18/2021 11:34
*/
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int t, a, b, max = -1, count = 0;
    
    cin >> t;
    
    while(t--)
    {
    	cin >> a >> b;
    	
    	count = abs(a - count) + b;
    	
    	if(count > max)
    		max = count;
	}
	
	cout << max << endl;

    return 0;
}
