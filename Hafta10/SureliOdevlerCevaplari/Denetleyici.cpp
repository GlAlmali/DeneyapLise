//Verilen kod sat�rlar�n� inceleyerek a��r� y�klenen fonksiyonun
//hangisi oldu�unu vekodun ekran ��kt�s�n� tahmin ediniz.
#include <iostream>
using namespace std;
class Dikdortgen{
public:
    void alanYaz1(int x, int y){
        cout << x * y << endl;
    }
    void alanYaz2(int x){
        cout << x * x << endl;
    }
    void alanYaz1(int x, double y){
        cout << x * y << endl;
    }
    void alanYaz3(double x){
        cout << x * x << endl;
    }
};
int main(){
    Dikdortgen dikt;
    dikt.alanYaz1(3,5);
    dikt.alanYaz1(4,2.1);
    dikt.alanYaz2(8);
    dikt.alanYaz3(6.7);
    return 0;
}
//Farkl� parametre t�r�nde a��r� y�klenen fonksiyon alanYaz1�dir.
