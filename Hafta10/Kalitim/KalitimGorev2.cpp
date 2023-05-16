//Hayvan sýnýfý üzerinde uygulanan kalýtým örneði
#include <iostream>
using namespace std;

class Hayvan {
public:
    void yeme() {
        cout << "Yemek yiyebilirim.." << endl;
    }
    void uyuma() {
        cout << "Uyuyabilirim.." << endl;
    }
};

class Kopek : public Hayvan {
public:
    void havlama() {
        cout << "Havlayabilirim.. Hav hav!!" << endl;
    }
};
int main() {
    Kopek kopek1;
    kopek1.yeme();
    kopek1.uyuma();
    kopek1.havlama();
    return 0;
}
