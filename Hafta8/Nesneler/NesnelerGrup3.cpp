#include <iostream>
#include <cstring>
using namespace std;
class Ogrenci
{
private:
    int ogr_no;
    char ogr_ad[20];
    char ogr_soyad[20];
    void ekle(int no, char ad[], char soyad[] )
    {
        ogr_no=no;
        strcpy(ogr_ad, ad);
        strcpy(ogr_soyad, soyad);
    }
    void goster() {
        cout <<"Ogrenci Bilgi: "<<ogr_no<<" "<<ogr_ad<<" "<<ogr_soyad<<endl;
    }
};
int main(void) {
    Ogrenci ogr;
    ogr.ekle(372, "Arda", "Ozcan")
    ogr.goster();
    return 0;
}
