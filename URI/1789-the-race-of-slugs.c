#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int i,t,max=0,a[505];
	while(scanf("%d",&t)==1)
	{
	
	for(i=0;i<t;i++)
	{
	scanf("%d",&a[i]);
    }
    sort(a,a+i);
	if(a[t-1]<10)
	{
		printf("1\n");
	}
	else if(a[t-1]>=10&&a[t-1]<20)
	{
		printf("2\n");
	}
	else
	{
		printf("3\n");
	}
   }
	return 0;
}
