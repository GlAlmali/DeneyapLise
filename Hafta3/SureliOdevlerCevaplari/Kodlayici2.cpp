#include <iostream>
using namespace std;
int main()
{
    int sayi1, sayi2, sayi3;
    cout << "Birinci sayi: ";
    cin >> sayi1;
    cout << "Ikinci sayi: ";
    cin >> sayi2;
    sayi3 = !(sayi1 ^ sayi2);
    cout << "Sonuc: " << sayi3 << endl;
}
