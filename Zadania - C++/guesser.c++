#include<iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>

using namespace std;

int liczba, strzal, licznik;

int main()
{
   


    cout << "Witaj w losowaniu! Za 3 sekundy wylosuje ci liczbe";
    Sleep(3000);
    cout << endl;

    srand(time(NULL));

    for (int i=1; i <= 6; i++) {

        
        liczba = rand() % 49 + 1;
        Sleep(1000);
        cout << liczba << "\a" << endl;

    }
    Sleep(2000);
    getchar();getchar();

    return 0;
}