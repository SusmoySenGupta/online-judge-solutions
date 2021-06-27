#include<stdio.h>
#define arr_size 20000
#define range 2000

int main()
{
    int i, n, value, max=0, arr[arr_size];
    
    scanf("%d", &n);
    
	for( i = 1; i<=n; i++)
    {
        scanf("%d", &value);
       
	    if(value>max)
        	max=value;
        else
        	value = value;
        
		arr[value] = arr[value] + 1;
    }

    for( i = 1; i<=max; i++)
    {
    	if(arr[i]==0)
    		continue;
    		
        printf("%d aparece %d vez(es)\n", i, arr[i]);
    }
    return 0;
}

