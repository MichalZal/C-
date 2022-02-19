#include<iostream>
// #include"bubsort.h"
// #include"quicksort.h"
#include<time.h>
#include<windows.h>

using namespace std;

void bubblesort(int *tab, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >=1; j--)
        {
            if (tab[j] < tab[j-1])
            {
                int bufor; 
                bufor = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v = tablica[(lewy+prawy)/2];
    int i,j,x;
    i = lewy;
    j = prawy;
        do {
            while (tablica[i]<v) i++;
            while (tablica[j]>v) j--;
            if (i<=j)
            {
                x=tablica[i];
                tablica[i]=tablica[j];
                tablica[j] = x;
                i++; j--;
            }
        }while (i<=j);
    if (j>lewy) quicksort(tablica, lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}



int ile;
clock_t start,stop,start1,stop1;

int main(void)
{
    while (true){
        system("CLS");
        cout << "Sorotowanie Babelkowe!" << endl;
        cout << "ile elementow talicy: ";
        cin >> ile;

        int * tablica;
        tablica = new int[ile];

        int * tablica2;
        tablica2 = new int[ile];

        srand(time(NULL));

        // cout << endl << "Pzed posorotwaniem: ";
        for (int i = 0; i < ile; i++)
        {
            tablica[i] = rand()%100+1;
            // cout << tablica[i] << " ";
        }

        for (int i = 0; i < ile; i++)
        {
            tablica2[i] = rand()%100+1;
            // cout << tablica[i] << " ";
        }

        start = clock();
        bubblesort(tablica, ile);
        stop = clock();

        // for (int i = 0; i < ile; i++)
        // {
        //     cout << tablica2[i] << " ";
        // }

        start1 = clock();
        quicksort(tablica2, 0, ile-1);
        stop1 = clock();

        // cout << endl << "Po posorotwaniu:    ";
        // for (int i = 0; i < ile; i++)
        // {
        //     cout << tablica2[i] << " ";
        // }

        float czas = (float)(stop-start) / CLOCKS_PER_SEC;
        float czas2 = (float)(stop1-start1) / CLOCKS_PER_SEC;
        cout << "\nBabelkom zajelo to: " << czas << " sekund" << endl;
        cout << "\nQuicksorcie zajelo to: " << czas2 << " sekund" << endl;

        delete [] tablica;
        delete [] tablica2;

        char w;
        cout << "Again? (y/n): ";
        cin >> w;
        if (w == 'n' || w == 'N')
        {
            exit(0);
        }
    }
}

