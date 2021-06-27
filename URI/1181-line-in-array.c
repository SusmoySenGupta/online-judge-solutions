#include<stdio.h>
int main()
{
	int n,i,j;
	char x;
	double a[12][12],s=0.0;
	
	scanf("%d",&n);
	
	getchar();
	
	scanf("%c",&x);
	
	for(i=0;i<12;i++)
		for(j=0;j<12;j++)
			scanf("%lf",&a[i][j]);

	
	for(j=0;j<12;j++)
		s=s+a[n][j];		

	if(x=='S')
		printf("%.1lf\n",s);
	else if(x=='M')
		printf("%.1lf\n",s/12);	

	return 0;
}
