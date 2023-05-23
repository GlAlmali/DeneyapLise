//Hayvan sýnýfýndan türetilen bir Kopek sýnýfýoluþturunuz.
//Bu sýnýflara ait iki farklý nesne tanýmlayarak, yer() isimli fonksiyonu
//geçersiz kýlan (overriding) kod satýrlarýný oluþturunuz.
#include <iostream>
using namespace std;
class Hayvan
{
public:
    void yer(){
        cout << "Yer..." << endl;
    }
};
class Kopek: public Hayvan
{
public:
    void yer(){
        cout << "Ekmek yer..." << endl;
    }
};
int main(void)
{
    Kopek k1, k2;
    k1.yer();
    k2.Hayvan::yer();
    return 0;
}
