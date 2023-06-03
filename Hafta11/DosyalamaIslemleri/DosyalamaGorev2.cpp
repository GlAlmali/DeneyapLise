//G�rev 2: C++ Programlama dili ile dosyalama kullanarak kendinize bir g�nl�k olu�turun.
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int islem;
    cout << "1- G�nl�k Oku." << endl;
    cout << "2- G�nl�k Yaz." << endl;
    cin >> islem;
    if(islem==1)
    {
        ifstream dosya("gunluk.txt");
        if(!dosya.is_open())
        {
            cout << "Dosya Okunamadi!";
            return 0;
        }
        string satir;
        while(getline(dosya,satir))
            cout << satir <<endl;
        dosya.close();
    }
    else if(islem==2)
    {
        ofstream dosya("gunluk.txt",ios::app);
        if(!dosya.is_open())
        {
            cout << "Dosya Okunamadi!";
            return 0;
        }
        string satir;
        cout << "Ne yazmak istersin:\n";
        cin.ignore();
        getline(cin, satir);
        cout << "Kaydediliyor...";
        dosya << satir <<endl;
        dosya.close();
    }
}
