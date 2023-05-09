//Ev sahipleri bahçelerine biri yetiþkin diðeri çocuk için iki havuz yaptýrmak istiyor.
//Bahçeyi inceleyen ustanýn, havuzlarýn yapýlacaðý alaný hesaplamaya ihtiyacý var.
//Ev sahiplerine istedikleri havuzlarýn yarýçaplarýný belirlemelerini istiyor.
//Ev sahiplerinden bu bilgiyi aldýktan sonra, daire þeklindeki iki havuzun alanýný hesaplayan
//bir programa bilgileri giriyor. Ustanýn kullandýðý programýn kodlarýný tasarlayýnýz.
//ÝPUCU: Sýnýf içerisinde tanýmlanacak yarýçap bilgilerinin usta tarafýndan eriþilebilir olmasýna dikkat ediniz.
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
