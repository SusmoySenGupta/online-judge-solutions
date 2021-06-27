#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	char a[99000],c;
	long long int i,j,l,k;
	while(gets(a)!= NULL)
	{
	l = strlen(a);
	for(i=0,k=0;i<l;i++)
	{
		if(a[i]==' ')
		continue;
		k++;
	if(k%2==1){
		if(a[i]>=95&&a[i]<=122){
			a[i]=toupper(a[i]);
		}
		else
		a[i]=a[i];
	}	
	else if(k%2==0){
		if(a[i]>=65&&a[i]<=90){
			a[i]=tolower(a[i]);
		}
		else
		a[i]=a[i];
	}	
	}
	a[l]='\0';	
	printf("%s\n",a);	
	}
	return 0;
}
