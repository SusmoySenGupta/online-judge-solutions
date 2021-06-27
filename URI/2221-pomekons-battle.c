#include<stdio.h>
int main()
{
	int g,d,t,b,da,dd,db,ga,gd,gb;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&b);	
	scanf("%d%d%d",&da,&dd,&db);	
	scanf("%d%d%d",&ga,&gd,&gb);	
	d=(da+dd)/2;
	if(db%2==0){
		d=d+b;
	}
	g=(ga+gd)/2;
	if(gb%2==0){
		g=g+b;
	}
	if(g>d){
		printf("Guarte\n");
	}
	else if(d>g){
		printf("Dabriel\n");
	}	
	else if(d==g)
	{
		printf("Empate\n");
		}	
		
	}
	
	
	
	return 0;
}
