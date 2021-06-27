#include<stdio.h>
int main()
{
    int I,j=7,k,o=5;
    k=j;
    
    for(I=1;I<=9;I=I+2)
    {
        for(j=k;j>=o;j--)
        {
        	printf("I=%d J=%d\n",I,j);
        }
        o=o+2;
        k=k+2;
    }
    return 0;
}
