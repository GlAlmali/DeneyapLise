//Araba sýnýfýna sýnýf içi bir yapýcý fonksiyon ekleme ve nesne tanýmlama.
#include <iostream>
#include <cstring>
using namespace std;
class Araba {
public:
    string marka;
    string model;
    int yil;
    int fiyat;
    //Parametreli sinif ici yapýcý fonksiyon
    Araba(string x_marka, string x_model, int x_yil, int x_fiyat) {
        marka = x_marka;
        model = x_model;
        yil = x_yil;
        fiyat = x_fiyat;
    }
};
int main() {
    // Yapýcý metodu farkli degerlerle cagirarak Araba nesneleri olusturma
    Araba araba1("Suzuki", "Vitara", 2016, 225000);
    Araba araba2("Volkswagen", "T-Roc", 2020, 360000);
    // Degerleri yazdirma
    cout << araba1.marka << " " << araba1.model << " " << araba1.yil << " " << araba1.fiyat << "\n";
    cout << araba2.marka << " " << araba2.model << " " << araba2.yil << " " << araba2.fiyat << "\n";
    return 0;
}
