#include <iostream>
#include <cstring>
using namespace std;
class Calisan
{
public:
    int sicil_no;
    char ad[20];
    float maas;
    void ekle(int s, char a[], float m) {
        sicil_no = s;
        strcpy(ad, a);
        strcpy(maas, m);
    }
    void goster() {
        cout<<"Calisan Bilgi:"<<sicil_no<<", "<<ad<<", "<<maas<<endl;
    }
};
int main() {
    Calisan c1;
    c1.ekle(1492, "Emre", 4000)
    c1.goster();return 0;
}
