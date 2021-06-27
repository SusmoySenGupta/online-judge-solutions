/* 
	problem no: 2760
	problem name: String Input and Output
	problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/2760
	author: Susmoy Sen Gupta
	Status: __Solved__
	Solved at: 6/24/21, 7:43:36 PM
*/

#include <stdio.h>

int main()
{
	char a[105], b[105], c[105];
	
	gets(a);
	gets(b);
	gets(c);
	
	printf("%s%s%s\n", a, b, c);
	
	printf("%s%s%s\n", b, c, a);
	
	printf("%s%s%s\n", c, a, b);

	printf("%.10s%.10s%.10s\n", a, b, c);
	
	return 0;
}
