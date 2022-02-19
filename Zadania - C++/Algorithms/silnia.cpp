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

long int silnia(int n)
{
    if(n==0) return 1;
    else return n*silnia(n-1);
}


int main(void)
{

    cout << f(1) << endl;

    cout << potega(3,4) << endl;


    // clock_t start = clock();
    // cout << fib(40);
    // clock_t end = clock();

    // float czas = (float)(end - start) / CLOCKS_PER_SEC;
    // cout << "\nZeby obliczyc tyle liczb fibonnaciego metoda rekursji minelo: " << czas << " sekund" << endl;

    cout << silnia(33);

    return 0;
}