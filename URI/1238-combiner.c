#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000],c[1000];
	int i,j,k,l1,l2,l3,t;
	scanf("%d",&t);
	while(t--){
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		l3 = l1 + l2;
		for(i=0,j=0,k=0;i<l1,j<l2,k<l3;i++,j++){
			if(i<=l1-1)
			c[k++] = a[i];
		     if(j<=l2-1)
			c[k++] = b[j];
		}
		c[l3]='\0';
		printf("%s\n",c);
		
		
	}
	
	
	
	
	
	
	return 0;
}
