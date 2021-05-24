/* 
	problem no: 2A
	problem name: Winner
	problem link: https://codeforces.com/problemset/problem/2/A
	author: Susmoy Sen Gupta
	Status: ____
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> score;
	queue<string> name;
	int t, n;
	string s;
	
	cin>>t;
	
	while(t--) {
		cin>>s>>n;
		score[s] += n; 
		for(auto sc:score) {
			if(sc.second > max) {
				max = sc.second;
				winner_name.push(sc.first);
			}
		}
	}
	
	cout<<winner_name.top()<<endl;

	return 0;
}
