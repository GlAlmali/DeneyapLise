//HAZÝNE ADASI
//Hazine Adasý’na hoþgeldiniz.
//Maceracýlar, hazine sandýðýnýn anahtarýný açmak için aþaðýdaki 7x7'lik
//matristen oluþan bir matematik problemi ile karþýlaþýr.
//Bu matris 0-9 arasý rastgele daðýlmýþ rakamlardan oluþmaktadýr.
//Maceracýlar, þifreyi çözmek için bu rakamlarýn kullaným miktarýný (sayýsýný)
//en azdan çoða doðru sýralayan kodu yazar. Çünkü kodun çýktýsý hazine sandýðýnýn þifresidir
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
