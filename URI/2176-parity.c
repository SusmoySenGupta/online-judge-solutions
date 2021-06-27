#include<stdio.h>
#include<string.h>
int main()
{
	char a[105];
	int i,l,c=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='1'){
			c++;
		}
	}
	if(c%2==0){
		a[l]='0';
		a[l+1]='\0';
		printf("%s\n",a);
	}
	else{
		a[l]='1';
		a[l+1]='\0';
		printf("%s\n",a);
	}
	
	
	
	
	
	
	return 0;
}
