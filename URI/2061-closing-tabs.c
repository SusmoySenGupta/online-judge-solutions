#include<stdio.h>
#include<string.h>
int main()
{
	int x,b;
	char a[10000];
	scanf("%d%d",&x,&b);
	int c=x;
	while(b--)
	{
	scanf("%s",a);
	if(a[0]=='f'){
		c++;
	}
	else{
		c--;
	}		
	}
	printf("%d\n",c);
	
	
	
	

	return 0;
}
