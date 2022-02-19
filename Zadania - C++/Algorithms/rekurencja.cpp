#include<iostream>
#include<windows.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;
}

long int potega(int p, int w)
{
    if (w==0) return 1;
    else return p*potega(p,w-1);
}

long int fib(int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1) + fib(n-2);
}

long int fib1(int n)
{
    long double fibionac[100000];
    fibionac[0] = 1;
    fibionac[1] = 1;


    for (int i=2; i < n; i++) 
    {
        fibionac[i] = fibionac[i-1] + fibionac[i-2];
    }

    return fibionac[n-1];
}


int main(void)
{

    cout << f(1) << endl;

    cout << potega(3,4) << endl;


    clock_t start = clock();
    cout << fib(40);
    clock_t end = clock();

    float czas = (float)(end - start) / CLOCKS_PER_SEC;
    cout << "\nZeby obliczyc tyle liczb fibonnaciego metoda rekursji minelo: " << czas << " sekund" << endl;

    
    clock_t siema = clock();
    cout << fib1(1000);
    clock_t dowidzenia = clock();

    float czas2 = (float)(dowidzenia - siema) / CLOCKS_PER_SEC;
    cout << "\nZeby obliczyc tyle liczb fibonnaciego przez petle minelo: " << czas2 << " sekund" << endl; 

    return 0;
}