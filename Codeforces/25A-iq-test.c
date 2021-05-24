/* 
	problem no: 25A
	problem name: IQ test
	problem link: https://codeforces.com/contest/25/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Mar/03/2018 20:34
*/
#include<stdio.h>
int main(){
	int a[100];
	int i,j,k,n,x,even=0,odd=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even++;
		}
		else 
		odd++;
	}
	int pos=1;
	if(odd==1)
	for(i=1;i<=n;i++){
		if(a[i]%2==1){
			pos = i;
			break;
		}
	}
	else if(even==1)
	for(i=1;i<=n;i++){
		if(a[i]%2==0){
			pos = i;
			break;
		}
	}	
	printf("%d\n",pos);
	return 0;
}
