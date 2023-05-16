//Farklý parametre türü kullanarak fonksiyon aþýrý yükleme
#include <iostream>
using namespace std;

class asiriYukleme
{
public:
    void yaz(int x) {
        cout << "Integer deger: " << x << endl;
    }
    void yaz(double y) {
        cout << "Double deger: " << y << endl;
    }
    void yaz(char z) {
        cout << "Char deger: " << z << endl;
    }
};
int main() {
    asiriYukleme ornek;
    ornek.yaz(45);
    ornek.yaz(34.78);
    ornek.yaz('A');
    return 0;
}
