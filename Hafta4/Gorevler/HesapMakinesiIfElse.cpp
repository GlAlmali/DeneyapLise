#include <iostream>
using namespace std;
int main()
{
    int sayi1, sayi2, sonuc;
    char islem; //büyük harfler, küçük harfler, özel karakterler
    cout << "Birinci sayi: ";
    cin >> sayi1;
    cout << "Ikinci sayi: ";
    cin >> sayi2;
    cout << "Islem seciniz (+ - * /): ";
    cin >> islem;
    if (islem == '+')
    {
        sonuc = sayi1 + sayi2;
        cout << "Sayilarin toplami: " << sonuc;
    }
    else if (islem == '-')
    {
        sonuc = sayi1 - sayi2;
        cout << "Sayilarin farki: " << sonuc;
    }
    else if (islem == '*')
    {
        sonuc = sayi1 * sayi2;
        cout << "Sayilarin carpimi: " << sonuc;
    }
    else if (islem == '-')
    {
        sonuc = sayi1 / sayi2;
        cout << "Sayilarin bolumu: " << sonuc;
    }
    else
    {
        cout << "Hatali islem girisi";
    }
    return 0;
}
