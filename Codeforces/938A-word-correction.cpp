/* 
	problem no: 938A
	problem name: Word Correction
	problem link: https://codeforces.com/contest/938/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Mar/10/2018 18:37
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,j,k,l,n;
	scanf("%d",&n);
	getchar();
	scanf("%s",a);
	l = strlen(a);
	int x=n;
	for(i=0;i<=n;i++){
		if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='y')){
		j=i+1;
		n--;
		while(j!=n){
			a[j] = a[j+1];
			j++;
		}	
		x--;
		a[n]='\0';
		i=0;
		}
				if(x==0){
			break;
 
	}	
		}
	for(i=0;i<=n;i++){
		if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='y')){
		j=i+1;
		n--;
		while(j!=n){
			a[j] = a[j+1];
			j++;
		}	
		x--;
		a[n]='\0';
		i=0;
		}
				if(x==0){
			break;
 
	}	
		}
		//printf("%d\n",n);
 
	printf("%s\n",a);
	return 0 ;
}
