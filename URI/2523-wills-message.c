#include<stdio.h>
int main()
{
	int n,x,l,i;
	char a[26];
	while(scanf("%s",a)==1){
	
	scanf("%d",&l);
	char b[l];
	for(i=0;i<l;i++)
	{
	scanf("%d",&x);
	b[i]=a[x-1];
	}
	b[l]='\0';
	printf("%s\n",b);
    }
	return 0;
}
