/* 
	problem no: 13A
	problem name: Numbers
	problem link: https://codeforces.com/contest/13/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Mar/17/2018 21:17
*/
#include <stdio.h>

int GCD(int m, int n)
{
    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}

int main()
{
    int A;
    scanf("%d", &A);

    int X = 0, Y = A-2;
    for (int base = 2; base < A; ++base)
    {
        int n = A, ds = 0;
        while (n != 0)
        {
            ds += n % base;
            n /= base;
        }
        X += ds;
    }

    int gcd = GCD(X, Y);
    X /= gcd;
    Y /= gcd;
    printf("%d/%d\n", X, Y);
    return 0;
}
