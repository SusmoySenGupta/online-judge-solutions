/* 
	problem no: 339A
	problem name: Helpful Maths
	problem link: https://codeforces.com/problemset/problem/339/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/14/2021 10:55
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    string str;
    
	int arr[105], c = 0;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
    {
    	if(str[i] != '+') 
    		arr[c++] = str[i] - 48;
	}
    
    sort(arr, arr + c);
    
    for(int i = 0; i < c; i++)
	{
    	printf("%d", arr[i]);
    	
    	if(i != c - 1)
    		printf("+");
	}
	
	cout<<endl;
    
    return 0;
}
