/* 
	problem no: 1512A
	problem name: Spy Detected
	problem link: https://codeforces.com/contest/1512/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/21/2021 19:59
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		map<int, vector<int>>arr;
		
		for(int i = 0; i<n; i++){
			cin>>x;
			arr[x].push_back(i);
		}
		
		for(auto a:arr)
		{
			if(a.second.size() == 1){
				cout << a.second[0] + 1 << "\n";
                break;
			}
		}
	}
	
	return 0;
}
