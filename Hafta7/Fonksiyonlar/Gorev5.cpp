//Bir bilgisayar program�nda, iki adet fonksiyon bulunmaktad�r.
//�lk fonksiyonda, ya� bilgisi al�nmakta ve fonksiyon i�erisinde g�ncellenmektedir.
//Bu g�ncellenen de�er ana program blo�unu etkilememektedir.
//�kinci fonksiyonda al�nan ya� bilgisi fonksiyon i�erisinde g�ncellenmekte ve de�i�iklik ana programda etkili olmaktad�r.
//Bunun i�in nas�l bir program yazmal�y�z?
#include <iostream>
using namespace std;
void fonksiyon1(int sayi)
{
    sayi = 20;
}
void fonksiyon2(int& sayi)
{
    sayi = 21;
}
int main()
{
    int yas = 19;
    fonksiyon1(yas);
    cout<<yas <<endl;
    fonksiyon2(yas);
    cout<<yas <<endl;
}
