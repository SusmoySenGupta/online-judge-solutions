/* 
	problem no: 1160
	problem name: Population Increase
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1160
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/20/21, 11:37:20 AM
*/

#include <iostream>

using namespace std;

int main()
{
	int t;
	long long int pa, pb;
	double g1, g2;
	
	cin >> t;
	
	while(t--) {
		
		int count = 0;
		
		cin >> pa >> pb >> g1 >> g2;
		
		while(pa <= pb && count <= 100)
		{      	               
			pa += 1.0 * pa * (g1 / 100);
			pb += 1.0 * pb * (g2 / 100);
			
			count++;
		}

		count <= 100 ? printf("%d anos.\n", count) : printf("Mais de 1 seculo.\n");
	}
	
	
	return 0;
}
