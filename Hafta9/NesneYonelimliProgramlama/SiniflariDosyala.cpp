#include <iostream>
#include "Ceptelefonu.h"
using namespace std;
int main()
{
    Ceptelefonu urun1(4500);
    Ceptelefonu urun2 = Ceptelefonu(3750);
    cout << "Urun 1 baslangic fiyati: " << urun1.fiyat << endl;
    cout << "Urun 2 baslangic fiyati: " << urun2.fiyat << endl;
    return 0;
}
