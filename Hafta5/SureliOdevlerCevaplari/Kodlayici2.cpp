//0-100 aras�nda rastgele �retilen 10 tam say�dan tek olanlar�n adetini ve toplam�n� ekrana yazd�ran kodu nas�l yazard�n�z?
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int adet=0,toplam=0;
    for(int i=0;i<10;i++)
    {
        int rastgele_sayi = rand()%100;
        cout << rastgele_sayi << endl;
        if(rastgele_sayi % 2 == 1)
        {
            adet++;
            toplam += rastgele_sayi;
        }
    }
    cout << adet << " adet tek sayinin toplami:" << toplam;
}
