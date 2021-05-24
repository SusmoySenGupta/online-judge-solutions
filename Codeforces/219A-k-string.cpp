/* 
	problem no: 219A
	problem name: k-String
	problem link: https://codeforces.com/contest/219/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/18/2020 13:09
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, i, j, a[1005]={0}, wc=0, c=0;
	char s[1005];
	string k_string = "";
	
	cin>>k;
	cin>>s;
	
	for( i=0; i<strlen(s); i++ )
	{
		a[s[i]]++;
	}
	for( i=97; i<=122; i++ )
	{
		if(a[i] > 0 )
		{
			wc++;
			if( a[i]%k == 0 )
				c++;
		}
	}
	
	if( wc == c )
	{
		for( i = 97; i<=122; i++ )
		{
			if(a[i] > 0)
			{
				for( j=0; j<a[i]/k; j++)
				{
					k_string += i;
				}
			}
		}
		for( i=1; i<=k; i++ )
			cout<<k_string;
		cout<<endl;
	}
	else
	{
		printf("-1\n");
	}
	
	
	return 0;
}

