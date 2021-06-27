#include <stdio.h>
int main()
{
    int t,a,min,count=0,flag=0,z=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        count++;
        if(a<min&&flag==0)
        {
            z=count;
            flag=1;
        }
        min=a;
    }
    printf("%d\n",z);
    return 0;
}
