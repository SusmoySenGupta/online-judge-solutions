#include<stdio.h>
int main()
{
	int n,i,j,k=11;
	char x;
	double a[12][12],s=0.0;
	//getchar();
	scanf("%c",&x);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0;i<12;i++){
		for(j=0;j<k;j++){
				s=s+a[i][j];
			
		}
		k--;
	}
		if(x=='S')
	printf("%.1lf\n",s);
	else if(x=='M')
	{
	printf("%.1lf\n",s/66.0);	
	}

	return 0;
}
