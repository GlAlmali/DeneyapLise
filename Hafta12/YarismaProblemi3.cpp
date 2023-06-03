//HAZ�NE ADASI
//Hazine Adas��na ho�geldiniz.
//Macerac�lar, hazine sand���n�n anahtar�n� a�mak i�in a�a��daki 7x7'lik
//matristen olu�an bir matematik problemi ile kar��la��r.
//Bu matris 0-9 aras� rastgele da��lm�� rakamlardan olu�maktad�r.
//Macerac�lar, �ifreyi ��zmek i�in bu rakamlar�n kullan�m miktar�n� (say�s�n�)
//en azdan �o�a do�ru s�ralayan kodu yazar. ��nk� kodun ��kt�s� hazine sand���n�n �ifresidir
#include <iostream>
using namespace std;
int main()
{
    // Tanimlama Bolumu
    int matris [7][7] ={{3,1,7,6,3,9,5},
                        {2,8,2,7,9,8,6},
                        {7,5,9,0,7,2,2},
                        {3,1,3,5,6,1,5},
                        {8,0,5,7,2,9,8},
                        {5,2,8,3,7,0,3},
                        {7,6,2,9,6,1,6}
                        };
    int m=7, n=7;
    int tekrar[10]={0};
    // Tekrar Sayilarini Bulma
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<10; k++){
                if(matris[i][j] == k){
                    tekrar[k]++;
                }
            }
        }
    }
    /*
    //Tekrar Sayilarini Bulma Hizli Yol
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            tekrar[matris[i][j]]++;
        }
    }
    */
    //Azdan Coga Dogru Rakamlari Yazdirma
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(tekrar[j]==i)
            cout << j <<endl;
        }
    }
    return 0;
}
