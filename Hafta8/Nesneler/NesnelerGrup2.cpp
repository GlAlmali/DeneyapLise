#include <iostream>
#include <cstring>
using namespace std;
class Kus
{
public:
    char tur[20];
    char ad[20];
    void ucma();
};
void Kus::ucma()
{
    cout<<"Kuslar kanatlarini kullanarak ucarlar."<<endl;
}
int main()
{
    Kus k1;
    strcpy(k1.tur,"Muhabbet Kusu ");
    strcpy(k1.ad,"Boncuk");
    cout<<"Kusun turu: "<<k1.tur<<"Adi: "<<k1.ad<<endl;
    k1.ucma();
    return 0;
}
