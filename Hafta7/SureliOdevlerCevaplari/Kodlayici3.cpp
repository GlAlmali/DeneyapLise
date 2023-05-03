//Ahmet yazacaðý kodda, kullanýcý tarafýndan girilecek sayýnýn
//kendisinden baþka bir sayýya bölünüp bölünmediðini bulmak istemektedir.
//Diðer bir ifadeyle sayýnýn asal sayý olupolmadýðýný bulmak istemektedir.
//Bunun için nasýl birfonksiyon yazmalýdýr? (asal ise 1 deðilse 0 döndürsün.)
#include <iostream>
using namespace std;
int asal_sayi_mi(int sayi)
{
    for(int i=2;i<sayi;i++)
        if( sayi% i == 0)
            return 0;
    return 1;
}
int main()
{
    int sonuc = asal_sayi_mi(23);
    cout << sonuc;
}
