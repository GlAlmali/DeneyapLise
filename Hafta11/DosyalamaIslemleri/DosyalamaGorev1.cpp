//G�rev 1: Klavyeden girilen �Merhaba Deneyap!� adl� c�mleyi
//direkt string nesnesine aktar�p sonucu ekrana yazd�ran kodu yazal�m.
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
