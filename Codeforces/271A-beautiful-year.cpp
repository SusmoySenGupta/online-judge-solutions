/* 
	problem no: 271A
	problem name: Beautiful Year
	problem link: https://codeforces.com/problemset/problem/271/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/19/2021 19:33
*/
#include <iostream>

using namespace std;

bool isDistinct(int x) 
{
	int a, b, c, d;
	
	a = x / 1000;
	b = x / 100 % 10;
	c = x / 10 % 10;
	d = x % 10;
	
	if(a != b && a != c && a != d && b != c && b != d && c != d)
		return true;
	
	return false;
}

int main ()
{
   int n;
   
   cin >> n;
   
   while(true) 
   {
		n++;
		
		if(isDistinct(n))
			break;
   }
   
   cout << n << endl;
   
   
    return 0;
}
