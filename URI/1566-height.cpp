#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int t,i,n,a[3000000]={0};
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+i);
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
		printf("%d\n",a[n-1]);	
	}
	return 0;
}
