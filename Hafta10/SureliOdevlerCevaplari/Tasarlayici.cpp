//Bir meyve s�n�f� olu�turup i�erisinde ekrana �Ben meyve sinifiyim�
//yazd�ran bir meyve s�n�f�ndan t�retilen Elma ve Muz s�n�flar�n�olu�turunuz.
//T�retilmi� bu s�n�flar�ni�erisinde meyvelerin renklerini ekranayazd�r�p,
//t�m s�n�flar i�in birer nesnetan�mlay�n�z.
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
