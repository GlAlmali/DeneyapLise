//Bir bilgisayar programýnda, iki adet fonksiyon bulunmaktadýr.
//Ýlk fonksiyonda, yaþ bilgisi alýnmakta ve fonksiyon içerisinde güncellenmektedir.
//Bu güncellenen deðer ana program bloðunu etkilememektedir.
//Ýkinci fonksiyonda alýnan yaþ bilgisi fonksiyon içerisinde güncellenmekte ve deðiþiklik ana programda etkili olmaktadýr.
//Bunun için nasýl bir program yazmalýyýz?
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
