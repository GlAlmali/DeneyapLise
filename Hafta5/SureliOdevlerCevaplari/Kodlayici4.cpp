//1-100 aras�nda ��e b�l�n�p yediye b�l�nmeyen say�lar�n miktar�n� bulan kodu nas�l yazard�n�z?
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
