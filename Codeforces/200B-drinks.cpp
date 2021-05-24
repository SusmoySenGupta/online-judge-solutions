/* 
	problem no: 200B
	problem name: Drinks
	problem link: https://codeforces.com/contest/200/problem/B
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/18/2020 19:50
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double x, sum=0.000000000000, n;
	cin>> n;
	int t = n;
	while(t--)
	{
		cin>>x;
		sum +=x;
	}
	printf("%.12Lf\n",sum/n);
	return 0;
}


