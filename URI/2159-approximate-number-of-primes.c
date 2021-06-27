#include<stdio.h>
#include<math.h>
int main()
{
	
	double a,max,min;
	scanf("%lf",&a);
	min=a/log(a);
	max=(1.25506)*(a/log(a));
	printf("%.1lf %.1lf\n",min,max);
	return 0;
}
