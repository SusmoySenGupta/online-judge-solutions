#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000],c[1000];
	int i,j,k,l1,l2,l3,t,s;
	scanf("%d",&t);
	getchar();
	while(t--){
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		s=0;
		if(l2<=l1)
		for(i=l2-1,j=l1-1;i>=0;i--,j--){
		    if(a[j]!=b[i]){
		    	s=1;
		    	break;
			}
		}
		else s=1;
		if(s==1)
		printf("nao encaixa\n");
		else
		printf("encaixa\n");
		s=0;
		
	}

	return 0;
}
