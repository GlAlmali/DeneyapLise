//Kardeþ olan iki peyzaj ustasý kare þeklinde olan bahçelerine peyzaj yapmak istiyor.
//Her ikisi de kendi bahçelerine hem çit gerecek hem de belli bir alana çiçek ekecektir.
//Çit ve çiçek alýþveriþi için kare þeklindeki iki bahçenin kenar bilgilerini ölçerek,
//bahçelerin alan ve çevresini hesaplayan bir program tasarlarlar. Ancak program hata vermektedir.
//Programý düzeltmek zorundalar çünkü hesaplayacaklarý daha pek çok bahçe var.
//Bu iki kardeþe programý baþtan tasarlamalarý için yardým ediniz.
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
