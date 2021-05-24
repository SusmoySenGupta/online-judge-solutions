/* OJ:- Codeforces */
/* Problem: Ternary String (1354B) */
/* Status: Not Solved yet */

#include<bits/stdc++.h>
#define lli long long int
#define INF 1000000000
 
using namespace std;

string str;
 
bool isValid(int k)
{
	int ar[4] = {0};
	for(int i=0;i<k-1;i++)
	{
		int index = str[i] - '0';
		ar[index]++;
	}
	
	for(int i=k-1;i<str.size();i++)
	{
		int index = str[i] - '0';
		ar[index]++;
		
		if((ar[1] > 0) && (ar[2] > 0) && (ar[3] > 0))
		return true;
		
		index = str[i-k+1] - '0';
		ar[index]--;
	}
	
	return false;
}
 
int Bsearch()
{
	int ans = INF;
	int left = 3;
	int right = str.size();
	
	while(left <= right)
	{
		int mid = (left + right) / 2;
		
		if(isValid(mid))
			ans = min(ans , mid) , right = mid-1;
		else
			left = mid + 1;
	}
	
	if(ans == INF) 
		return 0;
	else
		return ans;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		cout<<Bsearch()<<endl;
	}
	return 0;
}

