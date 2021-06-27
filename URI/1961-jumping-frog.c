#include<stdio.h>
int main()
{
	int a[200],n,i,x,flag=0,r=0;
	scanf("%d%d",&x,&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>a[i-1]){
			r=a[i]-a[i-1];
		}
		else{
		r= a[i-1]-a[i];
	   }
	   if(r>x){
	   	flag=1;
	   	break;
	   }
	   else{
	   	flag=0;
	   }
		
	}
	if(flag==0){
		printf("YOU WIN\n");
	}
	else if(flag==1){
		printf("GAME OVER\n");
	}

	return 0;
}
