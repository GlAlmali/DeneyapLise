//G�rev 3: Klavyeden girilen ��renci say�s� kadar s�nav notlar�n�
//klavyeden okuyup dosyaya yazd�ran program� olu�turunuz.
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
