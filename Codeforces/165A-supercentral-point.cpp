/* 
	problem no: 165A
	problem name: Supercentral Point
	problem link: https://codeforces.com/contest/165/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/20/2020 13:00
*/
#include<bits/stdc++.h>
using namespace std;
struct data{
	int x;
	int y;
};
int main()
{
	struct data inp[205];
	int t, s=0;
	scanf("%d",&t);
	for( int i=0; i<t; i++ )
	{
		scanf("%d%d",&inp[i].x,&inp[i].y);
	}
	for( int i=0; i<t; i++ )
	{
		int a=0, b=0, c=0, d=0;
		int x = inp[i].x;
		int y = inp[i].y;
		for( int j=0; j<t; j++ )
		{
			if( j != i )
			{
				if( inp[j].x > x && inp[j].y == y ) a = 1;
			
				if( inp[j].x < x && inp[j].y == y ) b = 1;
			
				if( inp[j].x == x && inp[j].y < y ) c = 1;
				
				if( inp[j].x == x && inp[j].y > y ) d = 1;	
			}
			if(	a==1 && b==1 && c==1 && d==1 ) break;
			
		}	
		if(	a==1 && b==1 && c==1 && d==1 )
		{
			s++;
		}
	}
	cout<<s<<endl;
	return 0;
}
