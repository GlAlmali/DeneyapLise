//Görev 1: Klavyeden girilen “Merhaba Deneyap!” adlý cümleyi
//direkt string nesnesine aktarýp sonucu ekrana yazdýran kodu yazalým.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream dosya;
    dosya.open("deneyap.txt", ios::app);
    string cumle;
    cin >> cumle;
    cout << cumle;
    dosya << cumle;
    dosya.close();
}
