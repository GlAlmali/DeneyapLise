//Karde� olan iki peyzaj ustas� kare �eklinde olan bah�elerine peyzaj yapmak istiyor.
//Her ikisi de kendi bah�elerine hem �it gerecek hem de belli bir alana �i�ek ekecektir.
//�it ve �i�ek al��veri�i i�in kare �eklindeki iki bah�enin kenar bilgilerini �l�erek,
//bah�elerin alan ve �evresini hesaplayan bir program tasarlarlar. Ancak program hata vermektedir.
//Program� d�zeltmek zorundalar ��nk� hesaplayacaklar� daha pek �ok bah�e var.
//Bu iki karde�e program� ba�tan tasarlamalar� i�in yard�m ediniz.
#include <iostream>
using namespace std;
class Kare {
private:
    float kenar;
public:
    void deger_atama(float);
    float cevre() {
        return 4 * kenar;
    }
    float alan() {
        return kenar * kenar;
    }
};
void Kare::deger_atama (float k) {
    kenar = k;
}
int main () {
    Kare kare1, kare2;
    kare1.deger_atama (6.2);
    kare2.deger_atama (4.3);
    cout<<"Kare 1 Cevresi: "<<kare1.cevre()<<" Alani: "<<kare1.alan()<<"\n";
    cout<<"Kare 2 Cevresi: "<<kare2.cevre()<<" Alani: "<<kare2.alan()<<"\n";
}
