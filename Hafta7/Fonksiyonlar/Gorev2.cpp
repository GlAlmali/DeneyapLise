//Dikdörtgen þeklinde olan büyük bir arazi üçgensel bölgelere ayrýlmak istenmektedir.
//Bunun içinde araziye ne kadar üçgen sýðabileceðini bulmak isteyen bir yazýlýmcý ihtiyaç duyduðu anda
//çaðýrabileceði üçgen alanýnýn hesaplamasýna yönelik bir fonksiyon yazmak istemektedir.
//Yazýlýmcý bu üçgen alan bulma fonksiyonunu nasýl kodlamasý gerekmektedir?
#include <iostream>
using namespace std;
void ucgen_alan_hesapla(double taban, double yukseklik)
{
    double alan = (taban*yukseklik) / 2;
    cout << alan << endl;
}
int main()
{
    ucgen_alan_hesapla(2,4);
}
