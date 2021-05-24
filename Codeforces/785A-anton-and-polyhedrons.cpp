/* 
	problem no: 785A
	problem name: Anton and Polyhedrons
	problem link: https://codeforces.com/contest/785/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Aug/09/2018 22:11
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	int i,j,n,s = 0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a;
		if(!strcmp(a,"Tetrahedron")){
			s = s + 4;
		}
		else if(!strcmp(a,"Cube")){
			s = s + 6;
		}
		else if(!strcmp(a,"Octahedron")){
			s = s +  8;
		}
		else if(!strcmp(a,"Dodecahedron")){
			s = s + 12;
		}
		else if(!strcmp(a,"Icosahedron")){
			s = s + 20;
		}
	}
	printf("%d\n",s);
	return 0;
	
}
