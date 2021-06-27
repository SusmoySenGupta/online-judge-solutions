#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int j,a[11],t,n,i;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}	
	
	printf("Case %d: %d\n",j,a[(n/2)]);	
	}
	
	
	
	
	
	return 0;
}
