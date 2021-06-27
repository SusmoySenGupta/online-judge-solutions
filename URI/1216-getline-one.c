#include<stdio.h>

int main()
{
	char a[1000];
	long int c=0;
	double s=0.0,x;
	
	while(scanf("%[^\n]", &a) != EOF)
	{
		scanf("%*c%lf%*c", &x);
		s = s + x;	
		c++;
	}
	
	printf("%.1lf\n",s/(double)c);
	
	return 0;
}
