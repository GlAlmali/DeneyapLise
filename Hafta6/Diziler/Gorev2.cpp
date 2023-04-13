//Program dizideki en küçük elemaný ve bu elemanýn indis numarasýný yazdýrmayý amaçlamaktadýr.
#include <iostream>
using namespace std;
int main()
{
    float dizi[] = {19.23, 26.43, 14.72, 28.71, 15.04, 10.06, 22.96};
    int i, y, el_sayisi = 7;
    float x;
    cout << "Dizi: ";
    for(i=0; i < el_sayisi; i++)
        cout << dizi[i] << " ";
    x = dizi[0];
    y = 0;
    for(i=1; i < el_sayisi; i++)
    {
        if(x > dizi[i])
        {
            x = dizi[i];
            y = i;
        }
    }
    cout << endl;
    cout << "En kucuk sayi: " << x <<" ve "<< "indis no: " << y;
    return 0;
}
