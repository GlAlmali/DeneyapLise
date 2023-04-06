#include <iostream>
using namespace std;
int main()
{
    int toplam = 0;
    for(int i=1; i <= 10; i++)
    {
        int puan;
        cout << i <<". ogrenci puani:";
        cin >> puan;
        toplam = toplam + puan //toplam += puan;
    }
    cout << "Ortalama : " << toplam /10 ;
}
