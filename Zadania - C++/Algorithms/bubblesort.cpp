#include<iostream>
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



int main(void)
{

    int tablica[] = {5,4,6,3,1,2};
    int tablica1[] = {10,14,16,23,5};
    int tablica2[] = {5,1,7,3,1,6};
    int tablica3[] = {79,25,74,24,67,8};

    cout << "\nTablica nr 0:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << tablica[i] << ',';;
    }

    bubblesort(tablica, 6);

    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << tablica[i] << ',';
    }


//========================================


    cout << "\nTablica nr 1:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << tablica1[i] << ',';;
    }

    bubblesort(tablica1, 5);

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << tablica1[i] << ',';
    }


//=========================================


    cout << "\nTablica nr 2:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << tablica2[i] << ',';;
    }

    bubblesort(tablica2, 6);

    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << tablica2[i] << ',';
    }


//====================================


    cout << "\nTablica nr 3:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << tablica3[i] << ',';;
    }

    bubblesort(tablica3, 6);

    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << tablica3[i] << ',';
    }



}