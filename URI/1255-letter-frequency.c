#include<stdio.h>
#include<string.h>
int main(){
	int b[1000]={0},i,j,l,t;
	char a[1000];
	scanf("%d",&t);
	getchar();
	while(t--){
		memset(b,0,sizeof(b));
		gets(a);
		l = strlen(a);
		for(i=0;i<l;i++){
			if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			if(a[i]>=65&&a[i]<=90)
			a[i] = a[i] + 32;
			b[a[i]]++;
		}
		}
		
		int max = 0;
		for(j=97;j<=122;j++){
            if(b[j]>max){
            	max=b[j];
			}
			else 
			max = max;
		}
		for(i=96;i<=122;i++){
			if(b[i]==max)
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
