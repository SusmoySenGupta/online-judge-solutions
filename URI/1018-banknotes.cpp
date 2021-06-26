#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	printf("%d\n",N);
	if(N>0&&N<1000000)
	printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N/100,(N%100)/50,((N%100)%50)/20,(((N%100)%50)%20)/10,((((N%100)%50)%20)%10)/5,(((((N%100)%50)%20)%10)%5)/2,((((((N%100)%50)%20)%10)%5)%2));
	return 0;
}
