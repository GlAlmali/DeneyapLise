//Klavyeden girilen 10 tam say�n�n toplam�n� ekrana yazd�ran kodu nas�l yazars�n�z?
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int toplam=0;
    for(int i=0;i<10;i++)
    {
        int sayi;
        cin >> sayi;
        toplam += sayi; //toplam = toplam + sayi
    }
    cout << "toplam:" << toplam;
}
