//Dosyadan okuduðunuz sayýlarýntoplamýný ekrana yazdýracak koduyazýnýz.
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int toplam = 0;
    ifstream dosya("sayilar.txt");
    string satir;
    if(dosya.is_open())
    {
        cout << "Sayilar:"<<endl;
        while(getline(dosya,satir))
        {
            toplam += atoi(satir.c_str()); cout << satir << endl;
        }
        cout << "Toplam: "<< toplam;
    }
    else
    {
        cout << "dosya Okunamadi!";
    }
}
