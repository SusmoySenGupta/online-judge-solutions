/* 
	problem no: 1A
	problem name: Theatre Square
	problem link: https://codeforces.com/contest/1/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/05/2018 12:21
*/
#include <cstdio>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    int m;
    int a;
    scanf ("%d %d %d", &n, &m, &a);
    printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));
    return 0;
}
