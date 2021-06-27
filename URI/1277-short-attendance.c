#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a[1050],d;
	char c[1000];
	
	int i,j,n,countp=0,t,countm=0;
	
	double b[1000]={0};
	
	cin>>t;
	while(t--)
	{
	countp=0;
	countm=0;
		
	scanf("%d",&n);
	
	for(i=0;i<n;i++) cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		cin>>c;
		countm==0;
		for(j=0;j<strlen(c);j++)
		{
			if(c[j]=='P') countp++;
			if(c[j]=='M') countm++;
		}

		b[i] =(100/(strlen(c)-countm))*countp;
		countp=0;
		countm=0;
	
	}
  
	for(i=0;i<n;i++)
	{
		if(b[i]<75.0) 
		{
			d += a[i] + " ";
		}
	}
	
	cout<<d.substr(0,d.length()-1)<<endl;
	d.clear();

   } 
	
  
	
	
	
	
	
	return 0;
}
