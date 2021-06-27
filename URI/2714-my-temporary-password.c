#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	char c[1000];
	int i,j=0,k,l,t;
	cin>>t;
	while(t--){
		cin>>c;
		l = strlen(c);
		if(l==20&&c[0]=='R'&&c[1]=='A')
		for(i=2;i<l;i++){
			if(c[i]!='0'){
				//a+=c[i];
				j=1;
			}
			if(j==1) a+=c[i];
		}
		
		if(j==1) cout<<a<<endl;
		else cout<<"INVALID DATA"<<endl;
		a.clear();
		j=0;
	}
	
	
	
	return 0;
}
