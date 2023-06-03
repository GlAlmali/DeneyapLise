//Görev 3: Klavyeden girilen öðrenci sayýsý kadar sýnav notlarýný
//klavyeden okuyup dosyaya yazdýran programý oluþturunuz.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int ogrenciSayisi;
    float sonuc;
    ofstream dosya("sinav.txt");
    if(!dosya.is_open())
    {
        cout << "Dosya Okunamadi!";
        return 0;
    }
    cout << "Kac ogrenci olacak:" << endl;
    cin >> ogrenciSayisi;
    for(int i=0;i<ogrenciSayisi;i++)
    {
        cout << i+1 <<". ogrenci sonucu:";
        cin >> sonuc;
        dosya << i+1 <<". ogrenci sonucu:";
        dosya << sonuc << endl;
    }
    dosya.close();
}
