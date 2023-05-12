#include <iostream>
#include <cstring>
using namespace std;
class Ceptelefonu{
public:
    char marka[30];
    int fiyat;
    bool aramaDurum;
    void arama();
};
void Ceptelefonu::arama()
{
    aramaDurum=true;
    cout<<"Istediginiz arama gerceklestiriliyor."<<endl;
}
int main()
{
    Ceptelefonu urun;
    strcpy(urun.marka,"Samsung");
    urun.fiyat=4500;
    cout<<"Urun: "<<urun.marka<<" Fiyat: "<<urun.fiyat<<endl;
    urun.arama();
    return 0;
}
