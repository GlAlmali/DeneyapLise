//Ev sahipleri bah�elerine biri yeti�kin di�eri �ocuk i�in iki havuz yapt�rmak istiyor.
//Bah�eyi inceleyen ustan�n, havuzlar�n yap�laca�� alan� hesaplamaya ihtiyac� var.
//Ev sahiplerine istedikleri havuzlar�n yar��aplar�n� belirlemelerini istiyor.
//Ev sahiplerinden bu bilgiyi ald�ktan sonra, daire �eklindeki iki havuzun alan�n� hesaplayan
//bir programa bilgileri giriyor. Ustan�n kulland��� program�n kodlar�n� tasarlay�n�z.
//�PUCU: S�n�f i�erisinde tan�mlanacak yar��ap bilgilerinin usta taraf�ndan eri�ilebilir olmas�na dikkat ediniz.
#include <iostream>
using namespace std;
class Daire {
public:
    float yari_cap;
    float alan_bul(float yari_cap) {
        return 3.14 * yari_cap * yari_cap;
    }
};
int main () {
    Daire daire1, daire2;
    cout << "1. dairenin yaricapini giriniz: " << endl;
    cin >> daire1.yari_cap;
    cout << "2. dairenin yaricapini giriniz: " << endl;
    cin >> daire2.yari_cap;
    cout<<"Daire 1 Alani: "<<daire1.alan_bul(daire1.yari_cap)<<"\n";
    cout<<"Daire 2 Alani: "<<daire2.alan_bul(daire2.yari_cap)<<"\n";
}
