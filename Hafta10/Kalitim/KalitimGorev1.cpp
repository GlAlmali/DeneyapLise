//Çokgenler üzerinde kalýtým örneði
#include <iostream>
using namespace std;

class Cokgen
{
protected:
    int genislik, yukseklik;
public:
    void degerAta(int g, int y) {
        genislik = g;
        yukseklik = y;
    }
};

class Dikdortgen: public Cokgen
{
public:
    int alan() {
        return (genislik * yukseklik);
    }
};

class Ucgen : public Cokgen
{
public:
    int alan() {
        return ((genislik * yukseklik)/2);
    }
};
int main()
{
    Dikdortgen dik;
    Ucgen ucg;
    dik.degerAta(4, 5);
    ucg.degerAta(4, 5);
    cout << "Dikdorgen Alani: " << dik.alan() << endl;
    cout << "Ucgen Alani: " << ucg.alan() << endl;
    return 0 ;
}
