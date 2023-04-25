//Harita mühendisi olan Ali kendisine gönderilen arazinin kenarlarý
//bir tane gönderildi ise karenin, iki tane gönderildi ise dikdörtgenin
//çevresini bulduracak bir fonksiyon tanýmlamak istemektedir.
//Sizce Ali nasýl bir kod yazmalýdýr?
#include <iostream>
using namespace std;
int cevre_hesapla(int a)
{
    int cevre = a*4;
    return cevre;
}
int cevre_hesapla(int a, int b)
{
    int cevre = 2*a + 2*b;
    return cevre;
}
int main()
{
    int cevre1 = cevre_hesapla(5);
    int cevre2 = cevre_hesapla(5,4);
    cout << cevre1 <<endl;
    cout << cevre2 <<endl;
}
