#include<iostream>
using namespace std;

int a, b;

int fib(int n) 
{
    if(n == 0) return a;
    else if(n == 1) return b;
    else if(n == 2) return a ^ b;

    return fib(n%3);
}

int main() 
{
	int t, n;
	
	cin >> t;
	
	while(t--)
	{
	    cin >> a >> b >> n;
	    cout << fib(n) << "\n";
	}
	
	return 0;
}