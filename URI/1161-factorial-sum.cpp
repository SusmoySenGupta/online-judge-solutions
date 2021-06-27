#include<stdio.h>
int main()
{
	unsigned long long int a,b,i,s,x;
	while(scanf("%llu%llu",&a,&b)==2)
	{
	s=1;	
	if(a<b){
		for(i=1;i<=a;i++){
			s=s*i;
		}
		x=s;
		for(i=a+1;i<=b;i++){
			s=s*i;
		}
		printf("%llu\n",x+s);
	}	
	else if(b<a){
		for(i=1;i<=b;i++){
			s=s*i;
		}
		x=s;
		for(i=b+1;i<=a;i++){
			s=s*i;
		}
		printf("%llu\n",x+s);
	}	
	else
	{
		for(i=1;i<=b;i++){
			s=s*i;
		}
		printf("%llu\n",2*s);
	}		
	}
	return 0;
}
