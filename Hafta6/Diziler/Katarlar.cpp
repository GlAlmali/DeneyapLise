#include <iostream>
using namespace std;
int main()
{
    char dizi[4];
    char katar[6];
    int i;
    cout << "Ilk ismin karakterlerini giriniz: "<< endl;
    for(i=0; i<4;i++){
        cin >> dizi[i];
    }
    cout << "Ikinci ismin karakterlerini giriniz: "<< endl;
    for(i=0; i<5;i++){
        cin >> katar[i];
    }
    katar[4] = '\0';

    cout << "Ilk isim: ";
    for(i=0; i<4; i++){
        cout << dizi[i];
    }

    cout << "\n Ikinci isim: ";
    cout << katar;

    return 0;
}
