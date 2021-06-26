#include<stdio.h>
int main()
{
    float n,ns,me;
    scanf("%f",&n);
    if(n<=400.00)
    {
	me=n*.15;
    ns=n+me;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",ns,me);
    }
    else if(n>=400.01&&n<=800.00)
    {
	me=n*.12;
    ns=n+me;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",ns,me);
    }
    else if(n>=800.01&&n<=1200.00)
    {
	me=n*.10;
    ns=n+me;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",ns,me);
    }
    else if(n>=1200.01&&n<=2000.00)
    {
	me=n*.07;
    ns=n+me;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",ns,me);
    }
    else
    {
    me=n*.04;
    ns=n+me;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",ns,me);
    }
    //printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",ns,me,ip);
    return 0;
}
