//Serkan yazdýðý programda isim kýsmýna kullanýcýnýn rakam girmesi durumunda
//programýnýn “isminizde rakam olmaz” hatasýný vermesini istiyor.
//Bunun için “isalpha” kodunda kullanan Serkan sizce nasýl bir kod yazmýþtýr?
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ad[50];
    cout << "Adinizi giriniz: ";
    cin >> ad;
    for(int i=0; i<strlen(ad);i++)
    {
        if(!isalpha(ad[i]))
        {
            cout << "Isminizde rakam olamaz!";
        return 0;
        }
    }
    cout << "Merhaba " << ad;
    return 0;
}
