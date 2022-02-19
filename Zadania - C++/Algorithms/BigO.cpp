// #include<iostream>
// using namespace std;

// int main(void)
// {       
//     int n,q,p,s;
//     cin >> n;
//     p = 1;
//     q = n;
    
//     while (p<q) 
//     {   
//         s = (p+q) /2;
//         cout << "s:" << s << endl; 
//         if (s*s*s < n)
//         {   
//             cout << "zaszedl warunek" << endl;
//             p = s+1;
//         }
//         else
//         {
//             cout << "nie zaszedl warunek" << endl;
//             q = s;
//         }
//     // }

//     cout << "n: " << n << endl;
//     cout << "q: " << q << endl;
//     cout << "p: " << p << endl;
//     cout << "s: " << s << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

class Pojazd{
    public:
    virtual void jedzie(){
        cout<<"pojazd jedzie"<<endl;
    }
    virtual void przyspiesza(){
        cout<<"Pojdazd przyspiesza"<<endl;
    }
};

class Traktor:public Pojazd{
    public:
    void jedzie(){
        cout<<"traktor jedzie"<<endl;
    }
    void przyspiesza(){
        cout<<"traktor przyspiesza"<<endl;
    }
};
class Czolg:public Pojazd{
    public:
    void jedzie(){
        cout<<"Czolg jedzie"<<endl;
    }
    void przyspiesza(){
        cout<<"Czolg przyspiesza"<<endl;
    }
};

int main(){
    Pojazd *poj;

    Traktor tra;
    Czolg czol;

    poj = &tra;
    poj -> jedzie();
    poj -> przyspiesza();

    poj = &czol;
    poj -> jedzie();
    poj -> przyspiesza();
}