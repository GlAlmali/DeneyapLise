//Matematik Öðretmeni Hasan, öðrencilerine gösterebilmek adýna ekrana girilen sayýnýn
//faktöriyelini bulduran bir program oluþturmak istemektedir.
//Bunun için nasýl bir kod yazmalýdýr?
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
