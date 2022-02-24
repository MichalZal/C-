#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>

using namespace std;
    
int liczba, strzal, licznik = 10;

int main() 
{
    cout << "Witaj! \nWygenerowano liczbe od 1 do 100 " << endl;
    
    srand(time(NULL));

    liczba = rand() % 100 + 1;



    while(licznik > 0)
    {
        cout << "Zgadnij liczbe: ";
        cin >> strzal;
        cout << endl;

        if (strzal == liczba) {
            cout << "wygrałes!" << endl;
            break;
            

        } else if (strzal > liczba){
            cout << "Za duza liczba!" << endl << endl;
            licznik--;


            cout << "Zostalo ci " << licznik << " prob" << endl << endl;

        } else if (strzal < liczba) {
            cout << "Za mala liczba!" << endl << endl;
            licznik--;

            cout << "Zostalo ci " << licznik << " prob" << endl << endl;
        } else if (licznik == 0){
            cout << "PRZEGRAŁES!";
            break;
        }
 
    }


    return 0;

}