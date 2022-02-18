#include<iostream>
#include<Windows.h>

using namespace std;

int main(void)
{
    while(true)
    {
        system("CLS");
        int a,b;
        int wybor;


        cout << "podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        system("CLS");
        cout << "KALLKULATOR!" << endl;
        cout << "============" << endl;
        cout << "LICZBY: " << a << " i " << b << endl;
        cout << "1. Dodac" << endl;
        cout << "2. Odjac" << endl;
        cout << "3. Pomnozyc" << endl;
        cout << "4. Podzielic" << endl; 
        cout << "5. Wyjdz" << endl;

        cout << "Co chcesz z nimi zrobic: ";
        cin >> wybor;
        
        switch (wybor)
        {
            case 1:
                cout << "Wynik: " << a + b;
                Sleep(3000);
                break;
            
            case 2:
                cout << "Wynik: " << a - b;
                Sleep(3000);
                break;

            case 3:
                cout << "Wynik: " << a * b;
                Sleep(3000);                
                break;

            case 4:
                cout << "Wynik: " << a / b;
                Sleep(3000);
                break;

            case 5:

                for(int i = 5; i > 0; i--)
                {
                    cout << "Program wylaczy sie za: " << i << " sekund" << endl;
                    Sleep(1000);
                    
                }
                cout << "Zapraszamy ponownie!" << endl;
                exit(0);
                
                break;

        default:
            break;
        }

    }
    

}