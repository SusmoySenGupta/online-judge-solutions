#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=0;
	cin>>a>>b;
	
	if(a >= b)
	{
		c = 24 - (a-b); 	
	}	
	else if( b >= a)
	{
		c=b-a;	
	}
	printf("O JOGO DUROU %d HORA(S)\n",c);
	return 0;
}
