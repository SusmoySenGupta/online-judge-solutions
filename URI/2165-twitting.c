#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int l;
	gets(a);
	l=strlen(a);
	if(l>140)
	{
		printf("MUTE\n");
	}
	else
	{
		printf("TWEET\n");
	}
	
	
	return 0;
}
