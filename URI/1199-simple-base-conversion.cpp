#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	int i,n;
	while(1)
	{
	cin>>a;
	
	if(strcmp(a,"-1")==0) {
		break;
	}
	
	else if(a[0]=='0'&&a[1]=='x')
	{
		sscanf(a,"%x",&n);
		printf("%d\n",n);
	}
	else
	{
		sscanf(a,"%d",&n);
		printf("0x%X\n",n);
	}
		
   }
	return 0;
}

