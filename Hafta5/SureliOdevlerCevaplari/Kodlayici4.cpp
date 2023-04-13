//1-100 arasýnda üçe bölünüp yediye bölünmeyen sayýlarýn miktarýný bulan kodu nasýl yazardýnýz?
#include <iostream>
using namespace std;
int main()
{
    int adet=0;
    for(int i=0;i<10;i++)
    {
        if (i%3 == 0 && i%7 != 0)
        adet++;
    }
    cout << adet << " sayi vardir.";
}
