//Bir meyve sýnýfý oluþturup içerisinde ekrana “Ben meyve sinifiyim”
//yazdýran bir meyve sýnýfýndan türetilen Elma ve Muz sýnýflarýnýoluþturunuz.
//Türetilmiþ bu sýnýflarýniçerisinde meyvelerin renklerini ekranayazdýrýp,
//tüm sýnýflar için birer nesnetanýmlayýnýz.
#include <iostream>
using namespace std;
class Meyve {
public:
    Meyve(){
        cout<<"Ben meyveyim."<<endl;
    }
};
class Elma: public Meyve {
public:
    Elma(){
        cout<<"Ben kirmizi renkliyim!!"<<endl;
    }
};
class Muz: public Meyve {
public:
    Muz(){
        cout<<"Ben sari renkliyim!!"<<endl;
    }
};
int main() {
    Elma e;
    Muz m;
}
