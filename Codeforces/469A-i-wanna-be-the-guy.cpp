/* 
	problem no: 469A
	problem name: I Wanna Be the Guy
	problem link: https://codeforces.com/problemset/problem/469/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/20/2021 10:54
*/
#include <iostream>

using namespace std;


int main ()
{
   int n, p, x, t = 2, arr[105] = {0};
   bool isPassed = true;
   
   cin >> n;
   
   while(t--) 
   {
		cin >> p;
		
		int i = 0;
		
		while(p--)
		{
			cin >> x;
			
			arr[x]++;
		}
   }
   
   for(int i = 1; i <= n; i++) 
   {
		if(arr[i] == 0) {
			isPassed = false;
			break;
		}
   }
   
	isPassed ?  printf("I become the guy.\n") : printf("Oh, my keyboard!\n");
   
   
    return 0;
}
