//Harita m�hendisi olan Ali kendisine g�nderilen arazinin kenarlar�
//bir tane g�nderildi ise karenin, iki tane g�nderildi ise dikd�rtgenin
//�evresini bulduracak bir fonksiyon tan�mlamak istemektedir.
//Sizce Ali nas�l bir kod yazmal�d�r?
#include <iostream>
using namespace std;
int cevre_hesapla(int a)
{
    int cevre = a*4;
    return cevre;
}
int cevre_hesapla(int a, int b)
{
    int cevre = 2*a + 2*b;
    return cevre;
}
int main()
{
    int cevre1 = cevre_hesapla(5);
    int cevre2 = cevre_hesapla(5,4);
    cout << cevre1 <<endl;
    cout << cevre2 <<endl;
}
