#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;



int main()
{
    while(true)
    {
        float a,b,c,d,e,m,srednia,s,wynik[5],najmniejsza_roznica;
        cout << "podaj abc:";
        cin >> a >> b >> c >> d >> e;

        m = a;
        if (b>m) m = b;
        if (c>m) m = c;
        if (d>m) m = d;
        if (e>m) m = e;

        cout << "najwieksza liczba: " << m << endl;

        srednia = (a+b+c+d+e) / 5;

        cout << "Srednia: " << srednia << endl;

        wynik[0] = abs(srednia-a);
        wynik[1] = abs(srednia-b);
        wynik[2] = abs(srednia-c);
        wynik[3] = abs(srednia-d);
        wynik[4] = abs(srednia-e);

        for (int i = 0; i < 5; i++)
        {   
        
            cout << i+1 << " Roznica: "<< wynik[i] << endl;
        }


        najmniejsza_roznica = wynik[0];
        if (wynik[1] < najmniejsza_roznica) najmniejsza_roznica = wynik[1];
        if (wynik[2] < najmniejsza_roznica) najmniejsza_roznica = wynik[2];
        if (wynik[3] < najmniejsza_roznica) najmniejsza_roznica = wynik[3];
        if (wynik[4] < najmniejsza_roznica) najmniejsza_roznica = wynik[4];

        if (najmniejsza_roznica == wynik[0])
        {
            cout << "najblizej sredniej: " << a << endl;
        }
        else if(najmniejsza_roznica== wynik[1])
        {
            cout << "najblizej sredniej: " << b << endl;
        }
        else if(najmniejsza_roznica== wynik[2])
        {
            cout << "najblizej sredniej: " << c << endl;
        }
        else if(najmniejsza_roznica== wynik[3])
        {
            cout << "najblizej sredniej: " << d << endl;
        }
        else if(najmniejsza_roznica== wynik[4])
        {
            cout << "najblizej sredniej: " << e << endl;
        }
        else 
        {
            cout << "Nie podales liczb!" << endl;
        }

        char w;
        cout << "Again? (y/n)";
        cin >> w;
        if (w == 'y'|| "Y")
        {
            system("CLS");
        }
        else {
            exit(0);
        }
    }


    return 0;
}