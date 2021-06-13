/* 
	problem no: 263A
	problem name: Beautiful Matrix
	problem link: https://codeforces.com/problemset/problem/263/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/13/2021 11:10
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int arr[7][7], row, column;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin>>arr[i][j];
			
			if(arr[i][j] == 1){
				row = i;
				column = j;
			}
		}	
	}

	printf("%d\n", abs(3 - (row + 1)) + abs(3 - (column + 1)));
	
	return 0;
}
