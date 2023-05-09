#include <iostream>
#include "Daire.h"
using namespace std;
int main ()
{
    Daire daire1, daire2;
    daire1.deger_atama (4.2,3.14);
    daire2.deger_atama (2.1,3.14);
    cout << "Daire 1 Cevresi: " << daire1.cevre() << "\n";
    cout << "Daire 1 Alani: " << daire1.alan ()<< "\n\n";
    cout << "Daire 2 Cevresi: " << daire2.cevre() << "\n";
    cout << "Daire 2 Alani: " << daire2.alan() << "\n";
    return 0;
}
