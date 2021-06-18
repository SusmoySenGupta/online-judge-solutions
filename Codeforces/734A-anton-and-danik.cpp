/* 
	problem no: 734A
	problem name: Anton and Danik
	problem link: https://codeforces.com/problemset/problem/734/A
	author: Susmoy Sen Gupta
	Status: ____
	Solved at: __
*/
#include <iostream>

using namespace std;

int main ()
{
    int t, count_A = 0, count_D = 0;
    char c;
    
    cin >> t;
    
    while(t--)
    {
    	cin >> c;
    	
		if(c == 'A')
			count_A++;
		else
			count_D++;
	}
	
	if(count_A == count_D)
		cout << "Friendship" << endl;
	else
		count_A > count_D ? cout << "Anton" : cout << "Danik" << endl;
		
    return 0;
}
