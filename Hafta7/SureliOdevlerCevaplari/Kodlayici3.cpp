//Ahmet yazaca�� kodda, kullan�c� taraf�ndan girilecek say�n�n
//kendisinden ba�ka bir say�ya b�l�n�p b�l�nmedi�ini bulmak istemektedir.
//Di�er bir ifadeyle say�n�n asal say� olupolmad���n� bulmak istemektedir.
//Bunun i�in nas�l birfonksiyon yazmal�d�r? (asal ise 1 de�ilse 0 d�nd�rs�n.)
#include <iostream>
using namespace std;
int asal_sayi_mi(int sayi)
{
    for(int i=2;i<sayi;i++)
        if( sayi% i == 0)
            return 0;
    return 1;
}
int main()
{
    int sonuc = asal_sayi_mi(23);
    cout << sonuc;
}
