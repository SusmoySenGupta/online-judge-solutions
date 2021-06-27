#include<stdio.h>
int main()
{
	char a[1000];
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		
	scanf("%s%d",a,&n);
	if(a[0]=='T'&&a[1]=='h'&&a[2]=='o'&&a[3]=='r'&&n>0)
	{
		printf("Y\n");
		}	
	else{
		printf("N\n");
	}	
		
		
	}
	return 0;
}
