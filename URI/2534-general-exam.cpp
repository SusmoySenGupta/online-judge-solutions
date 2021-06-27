/* 
	problem no: 2534
	problem name: General Exam
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2534
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 1:28:29 AM
*/

#include <bits/stdc++.h> 

using namespace std;

int main()
{
	int n, q;
	
	while( scanf("%d %d", &n, &q) ==  2 )
	{
		int i, arr[n], pos;
		
		for(i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
	
		sort(arr, arr + i, greater<int>());
		
		for(i = 0; i < q; i++)
		{
			cin >> pos;
			
			cout << arr[pos - 1] << endl;
		}
	}
	
	return 0;
}
