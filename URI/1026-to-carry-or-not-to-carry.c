#include<stdio.h>
#include<math.h>

int main(){
    long long int x,y;
	
	while(scanf("%lld%lld",&x,&y)==2)
		printf("%lld\n",x^y);
	
	return 0;
}
