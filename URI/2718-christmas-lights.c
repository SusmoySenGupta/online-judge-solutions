#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
	
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		ll maxx=0;
		ll count=0;
		ll temp;
		while(n>0)
		{
			temp=n%2;
			n/=2;
			if(temp==1)count++;
			else
			{
				if(count>maxx)
				{
					maxx=count;
					count=0;
				}
				count=0;
			}
		}
		if(count>maxx)
				{
					maxx=count;
					count=0;
				}
		cout<<maxx<<endl;
	}
	return 0;
}
