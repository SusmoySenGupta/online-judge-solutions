/* 
	problem no: 960A
	problem name: Check the string
	problem link: https://codeforces.com/contest/960/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/04/2018 13:19
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[10000];
	int i,j,k,l,count1=0,count2=0,count3=0,flaga=0,flagb=0,flagc=0;
	scanf("%s",a);
	l = strlen(a);
	int f=0;
	if(a[0]=='a'){
    flaga=1;
	for(i=0;i<l;i++){
		if(a[i]=='a') count1++;
		if(a[i]=='b'){
		flagb=1;
		break;
		}
		if(a[i]=='c') f++;
    }
   }
    for(j=i;j<l;j++){
    	if(a[j]=='b') count2++;
    	if(a[j]=='c'){
    		flagc=1;
    		break;
		}
		if(a[j]=='a') f++;
	}
	for(k=j;k<l;k++){
		if(a[k]=='c') count3++;
		if(a[k]=='b'||a[k]=='a') f++;
	}
	if(f==0&&flaga==1&&flagb==1&&flagc==1&&(count1==count3||count2==count3)) 
	printf("YES\n");
	else printf("NO\n");
	return 0;
}
