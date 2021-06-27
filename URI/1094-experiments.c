#include<stdio.h>
int main()
{
int N,i,amount,cobaias=0,coelhos=0,ratos=0,sapos=0;
char name,C,R,S;
scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
 scanf("%d%s",&amount,&name);	
 cobaias=cobaias+amount;
if(name==C)
{
 coelhos=coelhos+amount;
}
else if(name==R)
{
ratos=ratos+amount;	
}
else if(name==S)
{
sapos=sapos+amount;	
}

}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",cobaias,coelhos,ratos,sapos); 
return 0;
}
