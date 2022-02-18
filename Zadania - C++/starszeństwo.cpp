#include<iostream>
using namespace std;


int main(void)
{
    int a,b;
    cout << "Podaj wiek pierwszej osoby: " << endl;
    cin >> a;

    cout << "Podaj wiek drugiej osoby: " << endl;
    cin >> b;

    int m;
    if(a>b)
    {
        m = a;
        cout << "1 jest starszy!" << endl;
    }
    else 
    {
        m = b;
        cout << "2 jest starszy!" << endl;
    }
    
    if (m >= 100)
    {
        cout << "Whoa you;re cool! " << endl;
    }
    
}