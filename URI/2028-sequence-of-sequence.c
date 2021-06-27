#include<stdio.h>
int main()
{
	long long int x,a[99000],l=0,i,j,n,k=1;
	
	for(x=1;scanf("%lld",&n)==1;x++)
	{
	l=1;
	k=1;	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
			a[l]=k;
			l++;
			//printf("%d ",k);
		}
		k++;
	}
	a[0]=0;
	if(l>1)
	printf("Caso %lld: %lld numeros\n",x,l);
	else
	printf("Caso %lld: %lld numero\n",x,l);
	/*if(n==0){
		printf("%d",a[0]);
	}*/
	for(i=0;i<l;i++)
	{
	printf("%lld",a[i]);
	if(i<l-1){
		printf(" ");
	}
	if(i==l-1){
		printf("\n");
	}
	}
	printf("\n");
    }
	
	return 0;
}

