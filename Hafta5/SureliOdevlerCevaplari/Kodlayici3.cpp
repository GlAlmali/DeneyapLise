//Klavyeden �ift say� girildi�inde toplama i�lemi yapan, tek say� girildi�inde ise daha �nce girilmi� �ift say�lar�n ortalamas�n� g�steren program� yazal�m.
#include <iostream>
using namespace std; int main()
{
    int sayi,toplam = 0, sayac = 0;
    do
    {
        cin >> sayi;
        if(sayi %2 == 0)
        {
            toplam += sayi;
            sayac++;
        }
    }
    while(sayi %2 == 0);
    cout << sayac << " adet sayinin ortalamasi: "<<toplam/sayac;
}
