#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int metal, krysztal, deuter;
int koszt_metal, koszt_krysztal, koszt_deuter;
char wyb;

int main(void)
{
    do
    {
        koszt_metal = 20000;
        koszt_krysztal = 7000;
        koszt_deuter = 2000;

        cout << "Koszt statku: " << endl;
        cout << "Metal: " <<  koszt_metal << endl;
        cout << "Krysztal: " << koszt_krysztal << endl;
        cout << "Deuter: " << koszt_deuter << endl;

        cout << "\nIle masz metalu: ";
        cin >> metal;

        cout << endl << "Ile masz krysztalu: ";
        cin >> krysztal;

        cout << endl << "Ile masz deuteru: ";
        cin >> deuter;

        int mozliwa_liczba_mt = metal / koszt_metal;
        int mozliwa_liczba_krt = krysztal / koszt_krysztal;
        int mozliwa_liczba_dt = deuter / koszt_deuter;

        
        if (metal > koszt_metal && krysztal > koszt_krysztal && deuter > koszt_deuter)
        {

            system("CLS");
            cout << "Masz " << metal << " metalu" << endl;
            cout << "Masz " << krysztal << " krysztalu" << endl;
            cout << "Masz " << deuter << " deuteru" << endl;
            Sleep(2000);

            int m = mozliwa_liczba_mt;
            if (mozliwa_liczba_krt <= m) m = mozliwa_liczba_krt;
            if (mozliwa_liczba_dt <= m) m = mozliwa_liczba_dt;
            cout << "Mozesz kupic " << m << " statkow" << endl;
        }
        else if (metal < koszt_metal)
        {
            cout << "Masz za malo metalu" << endl;
        }
        else if (krysztal < koszt_krysztal)
        {
            cout << "Masz za malo krysztalu" << endl;
        }
        else if (deuter < koszt_deuter)
        {
            cout << "Masz za malo deuteru" << endl;
        }
        else
        {
            cout << "Ale podaj surowce a nie jakies cyferki";
        }

        
        cout << "\nAgain? (y/n)";
        cin >> wyb;

    } while(wyb != 'n');


}