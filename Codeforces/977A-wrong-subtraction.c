/* 
	problem no: 977A
	problem name: Wrong Subtraction
	problem link: https://codeforces.com/contest/977/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/06/2018 20:1
*/
#include<stdio.h>
int main(){
	long int n,k,num,num1,i,j;
	scanf("%ld%ld",&n,&k);
	num = n;
	for(i=1;i<=k;i++){
		if(num%10==0){
			num = num/10;
		}
		else if(num%10!=0) num--;
	}
	printf("%ld\n",num);
	return 0;
}
