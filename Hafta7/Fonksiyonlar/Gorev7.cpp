//Matematik ��retmeni Hasan, ��rencilerine g�sterebilmek ad�na ekrana girilen say�n�n
//fakt�riyelini bulduran bir program olu�turmak istemektedir.
//Bunun i�in nas�l bir kod yazmal�d�r?
#include <iostream>
using namespace std;
int faktoriyel(int sayi)
{
    if(sayi == 1)
        return 1;
    else
        return sayi*faktoriyel(sayi-1);
}
int main()
{
    int sonuc = faktoriyel(5);
    cout << sonuc <<endl;
}
