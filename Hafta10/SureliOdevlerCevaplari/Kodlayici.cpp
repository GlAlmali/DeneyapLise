//Hayvan s�n�f�ndan t�retilen bir Kopek s�n�f�olu�turunuz.
//Bu s�n�flara ait iki farkl� nesne tan�mlayarak, yer() isimli fonksiyonu
//ge�ersiz k�lan (overriding) kod sat�rlar�n� olu�turunuz.
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
