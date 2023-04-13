//Program girilen dizide 3’e bölünebilen ile 5’e bölünebilen sayýlarýn adedini ayrý ayrý ekrana yazdýrmayý amaçlamaktadýr.
#include <iostream>
using namespace std;
int main()
{
    int sayilar[100];
    int i, n, bol3=0, bol5=0;
    cout << "Eleman sayisini girin : ";
    cin >> n;
    cout<<"\nDizi elemanlarini girin :\n";
    for(i=0; i<n; i++)
    {
        cout << "Elemani girin dizi[" << i << "] : ";
        cin >> sayilar[i];
    }
    for(i=0; i<n; i++)
    {
        if(sayilar[i]%3==0)
            bol3++;
        if(sayilar[i]%5==0)
            bol5++;
    }
    cout << bol3 << endl;;
    cout << bol5 << endl;;
}
