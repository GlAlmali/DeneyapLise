//Caner parametre olarak gönderilen dizi içerisindeki sýfýrdan büyük
//öðrencilerin aldýðý matematik notlarýný toplamýný bulup geriye
//döndüren bir fonksiyon yazmak istemektedir.
//Bunun için nasýl birfonksiyon yazmalýdýr?
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
