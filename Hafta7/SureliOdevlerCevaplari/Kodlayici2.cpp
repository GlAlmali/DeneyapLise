//Caner parametre olarak g�nderilen dizi i�erisindeki s�f�rdan b�y�k
//��rencilerin ald��� matematik notlar�n� toplam�n� bulup geriye
//d�nd�ren bir fonksiyon yazmak istemektedir.
//Bunun i�in nas�l birfonksiyon yazmal�d�r?
#include <iostream>
using namespace std;
int dizi_topla(int dizi[5])
{
    int toplam = 0;
    for(int i=0;i<5;i++)
        if(dizi[i] > 0)
            toplam = toplam + dizi[i];
    return toplam;
}
int main()
{
    int sayilar[5] = {5,6,9,3,2};
    int sonuc = dizi_topla(sayilar);
    cout << sonuc;
}
