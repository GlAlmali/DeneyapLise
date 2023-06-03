//XOX OYNA
//Ka��k Adas��na ho�geldiniz.
//�kinci s�rada Bal�k�� Adas� vard�r. Bal�k�� Adas��n�n �ifresini kazanmak i�in
//macerac�lar�m�z ada yerlilerine XOX oyunu yazmak i�in yard�m etmelidir.
//XOX oyunu iki ki�i ile oynanan 3x3 bir tahta oyunudur.
//Bir ki�i tahtaya 'X' koydu�unda rakibi 'O' koymaktad�r.
//Oyunun amac� 3 adet �X� ve �O� harflerini yan yana, �st �ste veya �apraz olarak yerle�tirmektir.
//Macerac�lar XOX tahtas�n�n durumuna g�re bir oyunun bitip bitmedi�ini kontrol eden program�
//fonksiyon kullanarak yazarlar. Oyun bitmesi durumunda e�er X oyuncusu kazand� ise ekrana XXX,
//e�er O oyuncusu kazand� ise OOO, bitmedi�inde ise XOX yazd�r�lmas� gerekmektedir.
//Bal�k�� Adas��n�n �ifresi i�in macerac�lar yazd�klar� programda a�a��daki XOX tahtas�n� test eder.
//Kar��la�t�klar� program ��kt�s� Hazine Adas��n�n �ifresidir.
//Anahtar: �rnek olarak a�a��daki tahta i�in test edildi�inde ��kt� ne olacakt�r?
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
