/* 
	problem no: 12B
	problem name: Correct Solution?
	problem link: https://codeforces.com/contest/12/problem/B
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Feb/21/2018 22:24
*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long long int r,arr[15];
	char a[15],b[15];
	scanf("%s",a);
	scanf("%s",&b);
	int i=0;
	int la = strlen(a);
	int lb = strlen(b);
	long long int x,y;
	x=atoi(a);
	y=atoi(b);
	while(x!=0){
		arr[i] = x%10;
		x/=10;
		i++;
	}
	sort(arr,arr+i);
	if(arr[0]==0)
	swap(arr[0],arr[1]);
	
	int s=0;
	int k;
	
	for(int j=i-1,k=0;j>=1,k<i;j--,k++){
		s = s + arr[k]*pow(10,j);
	}
    if(s==y&&la==lb) printf("OK\n");
	else printf("WRONG_ANSWER\n"); 
	return 0;
}
