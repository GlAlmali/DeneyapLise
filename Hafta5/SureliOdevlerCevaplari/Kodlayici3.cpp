//Klavyeden çift sayý girildiðinde toplama iþlemi yapan, tek sayý girildiðinde ise daha önce girilmiþ çift sayýlarýn ortalamasýný gösteren programý yazalým.
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
