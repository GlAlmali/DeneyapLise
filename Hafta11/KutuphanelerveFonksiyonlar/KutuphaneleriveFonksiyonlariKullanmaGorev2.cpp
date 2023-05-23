//Ahmet yazacaðý bir programýn þifresinin otomatik olarak rastgele belirlenecek
//sekiz rakamdan oluþmasýný istemektedir. Bunun için nasýl bir kod yazmalýdýr?
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int karakterSayisi = 8;
    char sifre[9];
    for(int i=0;i<karakterSayisi;i++)
    {
        char karakter;
        do
        {
            karakter = rand() % 255;
        }
        while(!isalnum(karakter));
        sifre[i] = karakter;
    }
    sifre[karakterSayisi] = '\0';
    cout << "Sifreniz: "<< sifre;
    return 0;
}
