/* 
	problem no: 102B
	problem name: Sum of Digits
	problem link: https://codeforces.com/problemset/problem/102/B
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/24/2021 12:34
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string num;
	cin>>num;
	if(num.size() == 1) {
		cout<<0<<endl;
	}
	else {
		string newNum = num;
		int count = 0;
		while(newNum.size() != 1){
			int sumOfDigits = 0;
			for(int i=0; i<newNum.size(); i++){
				sumOfDigits += (newNum[i] - 48);
			}
			newNum = to_string(sumOfDigits);
			count++;
		}
		cout<<count;
	}
	
	
	return 0;
}
