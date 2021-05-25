/* 
	problem no: __
	problem name: Monk's Encounter with Polynomial
	problem link: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Mar 15, 2021 at 07:41 PM
*/
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli A, B, C, K;

lli F(lli X)
{
	return A * X * X + B * X + C;
}

lli Bsearch()
{
	if(C >= K) return 0;
		
	lli left = 1;
	lli right = ceil( sqrt(K) );
	
	while(left <= right)
	{
		lli mid = left +  (right - left) / 2 ;
		lli x = F(mid);
		lli y = F(mid - 1);
		
		if(x >= K && y < K)
			return mid;
		if(x < K)
			left = mid + 1;
		else
			right = mid - 1;
	}
}

int main()
{
	lli testCase;
	cin>>testCase;
	while(testCase--)
	{
		cin>>A>>B>>C>>K;
		cout<<Bsearch()<<endl;
	}
	return 0;
}
