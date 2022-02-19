#include<iostream>
#include<time.h>
#include<windows.h>

using namespace std;

int ile;
clock_t start, stop;
double czas;

void sortowanie_babelkowe(int* tab, int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j=n-1; j>= 1; j--)
        {
            if (tab[j]<tab[j-1])
            {
                int bufor;
                bufor = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}




int main(void)
{

    cout << "Porownanie czasow sortowania v.1" << endl;

    cout << "Ile losowych liczb tablicy: ";
    cin >> ile;

    int * tablica;
    tablica = new int [ile];

    srand(time(NULL));

    for (int i = 0; i < ile; i++)
    {
        tablica[i] = rand()%100000 + 1;
    }

    cout << "przed posortowaniem: " << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ' ';
    }



    cout << "Sortuje teraz babelkowo. Prosze czekac!" << endl;

    start = clock();
    sortowanie_babelkowe(tablica, ile);
    stop = clock();


    czas = (stop-start) / CLOCKS_PER_SEC;

    cout << "posortowane: " << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ' ';
    }

    cout << "\nCzas sortowanie bombelkowego: " << czas << " Sekund" << endl;

    delete [] tablica;

    return 0;
}