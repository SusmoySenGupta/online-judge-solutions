#include<stdio.h>
#include<string.h>
int main()
{
	char a[500],b[500],c[500];
	int z,x,i,j,l=strlen(b),k,c1=0;
	int l1=strlen(a);
	for(x=1;scanf("%s",a)==1;x++)
	{
	getchar();
	scanf("%s",b);	
	c1=0;
	z=0;
	l=strlen(b);
	l1=strlen(a);
    for(i=0;i<l;i++)
    {
    	for(j=i,k=0;k<l1;j++,k++)
    	{
    	c[k]=b[j];	
		}
	    c[l1]='\0';
		if(strcmp(a,c)==0){
		c1++;	
		z=i+1;;
		}
	}
	if(c1>0)
	printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",x,c1,z);
    else
    printf("Caso #%d:\nNao existe subsequencia\n\n",x);
	}
	
	
	
	
	return 0;
}
