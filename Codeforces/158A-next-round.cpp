/* 
	problem no: 158A
	problem name: Next Round
	problem link: https://codeforces.com/problemset/problem/158/A
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: Jun/13/2021 12:45
*/

#include<iostream>

using namespace std;

int main()
{
	int n, k, arr[55] = {-1};
	
	cin >> n >> k;
	
	int count = k;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
		if(arr[0] == 0) {
			printf("0\n");
			return 0;
		}
		
		if(arr[i] == 0 && i <= k-1){
			count--;
		}
		
		if(i > k - 1 && arr[i] >= arr[k-1] && arr[i] > 0) {
			count++;
		} 
	}
	
	printf("%d\n", count);
	
	return 0;
}
