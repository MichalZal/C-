#include<iostream>

using namespace std;



int main()
{
    int a,b,c;
    cout << "podaj abc:";
    cin >> a >> b >> c;


    if (a > b && a > c)
    {
        cout << a << " Jest najwieszke!" << endl;
    } 
    else if (b > a && b > c)
    {
        cout << b << " JEst najwieksze!" << endl;
    }
    else if (c > a && c > b)
    {
        cout << c << " JEst najwieszke!" << endl;
    }
    else {
        cout << "sa tkaie same";
    }










    // for(int i = 0; i < 1000; i++)
    // {
    //     cin >> n;

    //     if (n==2)
    //     {
    //         cout << "NIE" << endl;
    //     }
    //     else if (n%2==0)
    //     {
    //         cout << "NIE" << endl;
    //     }

    //     if (n%3==0 || n%5==0 || n%7==0)
    //     {
    //         cout << "TAK" << endl;
    //     } 
    //     else if (n%2==1)
    //     {
    //         cout << "NIE" << endl;
    //     }

    // }



}



























// #include<iostream>
// using namespace std;

// int n;
// int liczba;

// int main()
// {

//     cout << "ile liczb: ";
//     cin >>n;
    
//     for (int i = 0; i < n; i++) 
//     {
//         cout << "podaj liczbe";
//         cin >> liczba;

//     }

//     if (liczba == 1 || liczba == 2 || liczba == 3 || liczba == 3 ||liczba == 4 || liczba == 5 || liczba == 6 || liczba == 7 || liczba == 8 || liczba == 9)
//     {
//         cout << "TAK";
//     }
//     else {
//         cout << "NIE";
//     }

// }





















// int m;
// float avr;
// int n = 5;
// int a[5];
// float s;
// int aa[5];

// int main(void)
// {
//     // cout << "podaj trzy liczby podzeilone spacja: ";
//     // cin >> a >> b>> c;

//     // if (a > b && a > c)
//     // {
//     //     cout << "Najwieksza z nich to: " << a;
//     // }
//     // else if (b > a && b > c)
//     // {
//     //     cout << "Najwieksza z nich to: " << b;
//     // }
//     // else if (c > a && c > b)
//     // {
//     //     cout << "Najwieksza z nich to: " << c;
//     // }
//     // else
//     // {
//     //     cout << "Sa rowne";
//     // }
    
//     // m = a;
//     // if (b>m) m = b;
//     // if (c>m) m = c;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Podaj " << i << " liczbe: ";
//         cin >> a[i];
//         avr = ((a[1] + a[2] + a[3] + a[4] + a[5] + a[6]) / 5);
//     }
//     cout << "Srednia z tych liczb: " << avr;

//     aa[1] = ((a[1]/avr)-1);
//     aa[2] = ((a[2]/avr)-1);
//     aa[3] = ((a[3]/avr)-1);
//     aa[4] = ((a[4]/avr)-1);
//     aa[5] = ((a[5]/avr)-1);

//     if (aa[1]<0) aa[1]=aa[1]*(-1);
//     if (aa[2]<0) aa[2]=aa[2]*(-1);
//     if (aa[3]<0) aa[3]=aa[3]*(-1);
//     if (aa[4]<0) aa[4]=aa[4]*(-1);
//     if (aa[5]<0) aa[5]=aa[5]*(-1);

//     s = aa[1];

//     if (aa[2] < s) s == aa[2];
//     if (aa[3] < s) s == aa[3];
//     if (aa[4] < s) s == aa[4];
//     if (aa[5] < s) s == aa[5];

//     if (s == aa[1]) cout << "Najblizej: "<< aa[1] << endl;
//     if (s == aa[2]) cout << "Najblizej: "<< aa[2] << endl;
//     if (s == aa[3]) cout << "Najblizej: "<< aa[3] << endl;
//     if (s == aa[4]) cout << "Najblizej: "<< aa[4] << endl;
//     if (s == aa[5]) cout << "Najblizej: "<< aa[5] << endl;



    
//     return 0;
// }




// //================================================================