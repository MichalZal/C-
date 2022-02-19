#include<iostream>
using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;
}



int main(void)
{
    cout << f(4) << endl;
    return 0;
}