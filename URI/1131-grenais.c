#include<stdio.h>
int main()
{
	int in,gre,ag,count=0,in_count=0,gre_count=0,draw_count=0;
	while(1)
	{  
	    A:
		scanf("%d %d",&in,&gre);
		count++;
		if(in>gre)
		{
			in_count++;
		}
		else if(in<gre)
		{
			gre_count++;
		}
		else
		{
			draw_count++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&ag);
		if(ag==1)
		{
			goto A;
		}
		else if(ag==2)
		{
			if(gre_count<in_count)
			printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",count,in_count,gre_count,draw_count);
			else if(gre_count<in_count)
			{
				printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n",count,in_count,gre_count,draw_count);
			}
			else
			{
				printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNão houve vencedor\n",count,in_count,gre_count,draw_count);

			}
			break;
		}
		
		
	}
	
	
	
	
	return 0;
}
