#include <stdio.h>
int main()
{
    int par[6], impar[6], it=0, n=15, x, i=0, j=0;

    while(n--){
        scanf("%d",&x);
        if(x%2==0){
            par[i++] = x;
            if(i==5){
            	i=0;
            	for(it = 0; it < 5; it++){
            		printf("par[%d] = %d\n",it,par[it]);
                    par[it]=0;
				}
            }
        }
        else {
            impar[j++] = x;
            if(j == 5){
                j = 0;
            	for(it = 0; it < 5; it++){
            		printf("impar[%d] = %d\n",it,impar[it]);
                    impar[it]=0;
				}
            }
        }
    }
    for(i = 0;i < 5;i++){
        if(impar[i]==0)break;
        printf("impar[%d] = %d\n",i,impar[i]);
    }
     for(i = 0;i < 5;i++){
        if(par[i]==0)break;
        printf("par[%d] = %d\n",i,par[i]);
    }
    return 0;
}



