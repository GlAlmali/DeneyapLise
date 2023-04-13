//Klavyeden girilen 10 tam sayýnýn toplamýný ekrana yazdýran kodu nasýl yazarsýnýz?
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
