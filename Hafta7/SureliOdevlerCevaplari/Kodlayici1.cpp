//Parametre olarak g�nderilen iki say�n�n b�y���n�n k�����ne b�l�m�nden kalan� geriye d�nd�ren bir fonksiyon yaz�n�z.
#include <iostream>
using namespace std;
int kalan_bul(int sayi1, int sayi2)
{
    if(sayi1 > sayi2)
        return sayi1 % sayi2;
    else
        return sayi2%sayi1;
}
int main()
{
    int sonuc = kalan_bul(9,12);
    cout << sonuc;
}
