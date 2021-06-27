#include <stdio.h>
int main()
{
    int n,i;
    float a,b,c,total,avg;
    scanf("%d",&n);
    float res[n];
    for(i = 0;i < n;i++){
    scanf("%f %f %f",&a,&b,&c);
    total = a*2.0 + b*3.0 + c*5.0;
    avg = total / 10;
    res[i] = avg;
    }
    for(i =0;i < n;i++){
    printf("%.1f\n",res[i]);
    }
    return 0;
}
