#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,t;
	char b[100];
	float a[100],x,s=0;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
	scanf("%s",b);	
	scanf("%f",&x);
	for(i=0;i<7;i++)
	{
	scanf("%f",&a[i]);	
	}	
	sort(a,a+i);	
	for(i=0;i<7;i++){
		if(a[i]==a[0]||a[i]==a[6])
		continue;
		else
		s=s+a[i];
	}	
	printf("%s %.2f\n",b,s*x);	
	s=0.0;
	}
	
	
	return 0;
}
