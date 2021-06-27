#include<stdio.h>
int main()
{
	int x, y, m;
	char a[10];
	while ( gets(a) )
	{
	
	x = a[0] - 48;
	y = ( a[2] - 48 ) * 10 + ( a[3] - 48 );
	if( x < 7 )
	{
	m = 0;	
	}
	else if( x == 7)
	{
		m = y;
	}
	else
	{
		m=( x - 7 ) * 60 + y;
	}
	
	printf( "Atraso maximo: %d\n", m );
    }
	
	return 0;   
}
