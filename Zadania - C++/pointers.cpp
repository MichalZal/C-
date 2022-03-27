#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;

int ile;
clock_t start;
clock_t stop;

int main(void)
{
    while(true)
    {
        cout << "Jak dluga ma byc tablica wskaznikow: ";
        cin >> ile;

        int * tablica;
        tablica = new int[ile];

        start = clock();

        for (int i = 0; i < ile; i++)
        {
            tablica[i] = i;
            tablica[i] += 50;

            // cout << tablica[i] << endl;
        }

        stop = clock();

        double czas = (double)(stop-start) / CLOCKS_PER_SEC;
        
        cout << "czas 1: " << czas << " sekund" << endl;





        delete [] tablica;





        int *wskaznik = tablica;
        tablica = new int[ile];

        start = clock();

        for (int i = 0; i < ile ; ++i)
        {
            *wskaznik = i;
            *wskaznik += 50;
            wskaznik++;
            // cout << wskaznik << endl;
        }

        stop = clock();

        double czas2 = (double)(stop-start) / CLOCKS_PER_SEC;
        cout << "czas 2: " << czas2 << " sekund" << endl;

        delete [] tablica;
        

        char wyb;
        cout << "Again? (y/n)";
        cin >> wyb;

        switch (wyb)
        {
            case 'n': 
                exit(0);    
            

            case 'y': 
                system("CLS");
            Break;

            
        }
    }
    return 0;
}
