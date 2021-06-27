/* 
	problem no: 2031
	problem name: Rock, Paper, Airstrike
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2031
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/23/21, 8:19:36 PM
*/

#include <iostream>

using namespace std;

int main()
{
	int t;
	string s1, s2;
	
	cin >> t;
	
	while(t--)
	{
		cin >> s1 >> s2;
		
        if(s1 == "pedra" && s2 == "pedra") 
			printf("Sem ganhador\n");
        
		else if(s1 == "ataque" && s2 == "ataque") 
			printf("Aniquilacao mutua\n");
        
		else if(s1 == "papel" && s2 == "papel") 
			printf("Ambos venceram\n");
        
		else if(s1 == "ataque" || (s1 == "pedra" && s2 == "papel"))
            printf("Jogador 1 venceu\n");
        
		else printf("Jogador 2 venceu\n");
	}
	 
	return 0;
}
