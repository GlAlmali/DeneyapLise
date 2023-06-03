//XOX OYNA
//Kaþýk Adasý’na hoþgeldiniz.
//Ýkinci sýrada Balýkçý Adasý vardýr. Balýkçý Adasý’nýn þifresini kazanmak için
//maceracýlarýmýz ada yerlilerine XOX oyunu yazmak için yardým etmelidir.
//XOX oyunu iki kiþi ile oynanan 3x3 bir tahta oyunudur.
//Bir kiþi tahtaya 'X' koyduðunda rakibi 'O' koymaktadýr.
//Oyunun amacý 3 adet ‘X’ ve ‘O’ harflerini yan yana, üst üste veya çapraz olarak yerleþtirmektir.
//Maceracýlar XOX tahtasýnýn durumuna göre bir oyunun bitip bitmediðini kontrol eden programý
//fonksiyon kullanarak yazarlar. Oyun bitmesi durumunda eðer X oyuncusu kazandý ise ekrana XXX,
//eðer O oyuncusu kazandý ise OOO, bitmediðinde ise XOX yazdýrýlmasý gerekmektedir.
//Balýkçý Adasý’nýn þifresi için maceracýlar yazdýklarý programda aþaðýdaki XOX tahtasýný test eder.
//Karþýlaþtýklarý program çýktýsý Hazine Adasý’nýn þifresidir.
//Anahtar: Örnek olarak aþaðýdaki tahta için test edildiðinde çýktý ne olacaktýr?
#include <iostream>
#include <stdlib.h>
using namespace std;
bool bittimi(char tahta[3][3])
{
    for(int i=0;i<3;i++)
    {
        if(tahta[i][0] == tahta[i][1] && tahta[i][1] == tahta[i][2] )
        {
            if(tahta[i][0]=='X')
                cout <<"XXX";
            else
                cout << "OOO";
            return true;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(tahta[0][i] == tahta[1][i] && tahta[1][i] == tahta[2][i] )
        {
            if(tahta[i][0]=='X')
                cout << "XXX";
            else
                cout << "OOO";
            return true;
        }
    }
    if(tahta[0][0] == tahta[1][1] && tahta[1][1] == tahta[2][2] )
    {
        if(tahta[0][0]=='X')
            cout << "XXX";
        else
            cout <<"OOO";
        return true;
    }
    if(tahta[0][2] == tahta[1][1] && tahta[1][1] == tahta[2][0] )
    {
        if(tahta[0][2]=='X')
            cout << "XXX";
        else
            cout << "OOO";
        return true;
    }
    return false;
}
int main()
{
    char tahta[3][3]={{'X','O','X'},
                    {'X','X','O'},
                    {'O','X','X'}};
    if(bittimi(tahta))
        cout <<" Oyun_Bitti";
    else
        cout <<"DEVAM";
}
