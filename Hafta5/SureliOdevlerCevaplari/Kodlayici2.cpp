//0-100 arasýnda rastgele üretilen 10 tam sayýdan tek olanlarýn adetini ve toplamýný ekrana yazdýran kodu nasýl yazardýnýz?
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
