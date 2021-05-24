/* 
	problem no: 911A
	problem name: Nearest Minimums
	problem link: https://codeforces.com/contest/911/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/06/2018 18:02
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int a[100005],b[100005]={0},c[100005]={0},i,j,n,*m;
	
	scanf("%d",&n);
	
	for(i = 0; i <n; i++){
		scanf("%d",&a[i]);
	}
	
   	m=min_element(a,a+i); 
   	
    for( i=0, j=0; i<=n; i++){
		if(a[i]==*m){
			b[j] = i+1;
			j++;
	    }
	}
	
	for( i=0; i < j-1; i++){
		
		c[i] = b[i+1] - b[i];
	}
	m  = min_element(c,c+i);
	
	printf("%d\n",*m);
	
	return 0;
}
