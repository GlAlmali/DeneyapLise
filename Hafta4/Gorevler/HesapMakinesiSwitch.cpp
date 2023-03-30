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
    switch(islem)
    {
        case '+':
        {
            sonuc = sayi1 + sayi2;
            cout << "Sayilarin toplami: " << sonuc;
            break;
        }
        case '-':
        {
            sonuc = sayi1 - sayi2;
            cout << "Sayilarin farki: " << sonuc;
            break;
        }
        case '*':
        {
            sonuc = sayi1 * sayi2;
            cout << "Sayilarin carpimi: " << sonuc;
            break;
        }
        case '/':
        {
            sonuc = sayi1 / sayi2;
            cout << "Sayilarin bolumu: " << sonuc;
            break;
        }
        default:
            cout << "Hatali islem girisi";
    }
}
