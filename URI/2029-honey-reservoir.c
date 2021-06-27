#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	double v,r,l,d;
	while(scanf("%lf%lf",&v,&d)==2)
	{
	r=d/2;
	l=(v/(pi*pow(r,2)));
	printf("ALTURA = %.2lf\nAREA = %.2lf\n",l,pi*r*r);		
	}
	
	return 0;
}
