#include<stdio.h>
#include<string.h>
int main()
{
	char a[10005];
	int i,t,l;
	scanf("%d",&t);
	while(t--){	
	scanf("%s",a);
	l=strlen(a);
	printf("%.2lf\n",(double)l/100);
    }
	return 0;
}
