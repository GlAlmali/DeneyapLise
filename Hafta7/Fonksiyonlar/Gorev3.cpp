//Fonksiyona gönderilen tam sayý tipindeki dizinin
//en büyük sayýsýný ekrana yazan fonksiyonu yazalým.
#include <iostream>
using namespace std;
void en_buyuk(int dizi[5])
{
    int enbuyuk = dizi[0];
    for(int i=1;i<5;i++)
    {
        if(enbuyuk<dizi[i])
            enbuyuk=dizi[i];
    }
    cout << enbuyuk;
}
int main()
{
    int sayilar[] = {5,3,4,5,8};
    en_buyuk(sayilar);
}
