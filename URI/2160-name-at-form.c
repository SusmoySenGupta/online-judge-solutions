#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int l;
	gets(a);
	l=strlen(a);
	if(l>80)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	
	
	return 0;
}
