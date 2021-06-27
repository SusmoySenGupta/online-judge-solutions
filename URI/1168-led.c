#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,s;
	char x[100];
	scanf("%d",&t);
	while(t--)
	{
	 scanf("%s",x);
	 l=strlen(x);
	 s=0;
	 for(i=0;i<l;i++)
	 {
	 	if(x[i]=='0')
	 	{
	 	s=s+6;	
		}
		else if(x[i]=='1')
		{
			s=s+2;
		}
		else if(x[i]=='2')
		{
			s=s+5;
		}
		else if(x[i]=='3')
		{
			s=s+5;
		}
		else if(x[i]=='4')
		{
			s=s+4;
		}
		else if(x[i]=='5')
		{
			s=s+5;
		}
		else if(x[i]=='6')
		{
			s=s+6;
		}
		else if(x[i]=='7')
		{
			s=s+3;
		}
		else if(x[i]=='8')
		{
			s=s+7;
		}
		else if(x[i]=='9')
		{
			s=s+6;
		}
		
	 }
	 printf("%d leds\n",s);
	 	
	}
	
	
	
	
		
	return 0;
}
