#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long long int i,e,o,x,t,j,even[100005],odd[100005];
	cin>>t;
	for(i=0,e=0,o=0;i<t;i++)
	{
		cin>>x;
		if(x%2==0)
		{
			even[e]=x;
			e++;
		}
		else
		{
			odd[o]=x;
			o++;
		}
    }
	sort(even,even+e);
	sort(odd,odd+o);
	for(i=0;i<e;i++)
	{
	printf("%d\n",even[i]);	
	}
	for(i=o-1;i>=0;i--)
	{
		printf("%d\n",odd[i]);
	}
return 0;
}
