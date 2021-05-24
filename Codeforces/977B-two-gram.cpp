/* 
	problem no: 977B
	problem name: Two-gram
	problem link: https://codeforces.com/contest/977/problem/B
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/06/2018 21:22
*/
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,sub[100];
    int n,i,j,k,l,count[100]={0};
    cin>>n;
    cin>>s;
    l = s.length();
    for(i=0;i<l-1;i++){
    sub[i] = s.substr(i, 2);
    
    }
     for(j=0;j<i;j++){
     	for(k=0;k<i;k++) if(sub[j]==sub[k]){
		 count[j]++;	
		 } 
	 }
	 int max = *std::max_element(count,count+j); 
	for(j=0;j<i;j++)
	 if(count[j]==max) {
		cout<<sub[j];
		break;
	}
    return 0;
}

