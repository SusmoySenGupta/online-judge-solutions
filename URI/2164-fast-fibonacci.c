#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double x,m,n,o,p;
	scanf("%d",&a);
	m=(1+sqrt(5))/2;
	n=pow(m,a);
	o=(1-sqrt(5))/2;
	p=pow(o,a);
	printf("%.1lf\n",(n-p)/sqrt(5));
	return 0;
}
