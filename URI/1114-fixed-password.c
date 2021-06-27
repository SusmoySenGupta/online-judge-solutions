#include <stdio.h>
int main()
{
    int n;
    A:
    scanf("%d",&n);
    if(n==2002)
    {
    	printf("Acesso Permitido\n");
	}
    else if(n!=2002)
    {
	    printf("Senha Invalida\n");
	    goto A;
	}
    return 0;
}
