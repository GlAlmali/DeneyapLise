//Arkadaşın (bilgisayar) aklından 1-9 arasında rastgele bir sayı tutar.
//Sen de tutulan bu sayıyı 3 tahminde bulmaya çalışan bir program yazıyorsun.
//Kural gereği tutulan sayıyı 3 tahminde bulamazsan oyun sona erer.
//Eğer 3 tahminden birinde sayıyı bulursan program tutulan sayıyı kaçıncı tahmin hakkında bulduğunu ekrana yazdırır.
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sayi;
    int tahmin = -1;
    int tahmin_sayisi = 0;
    int tahmin_limiti = 3;
    bool outOfGuesses = false;
    srand(time(NULL));
    sayi = rand() % 9 + 1;
    cout << sayi;
    while(tahmin != sayi && tahmin_sayisi < tahmin_limiti)
    {
        cout << "Tahmininizi girin: ";
        cin >> tahmin;
        tahmin_sayisi++;
    }
    if(tahmin == sayi)
    {
        cout << "Tebrikler, " << tahmin_sayisi <<". denemede kazandiniz!" << endl;
    }
    else
    {
        cout << "Uzgunum, 3 hakkinizda bilemediniz!" << endl;
    }
    return 0;
}
