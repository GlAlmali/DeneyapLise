//Program girilen dizide tek ve �ift say�lar�n adedini ekrana yazd�rmay� ama�lamaktad�r.
#include <iostream>
using namespace std;
int main()
{
    int dizi[100];
    int i, boyut, tek=0, cift=0;
    cout << "Eleman sayisini girin : ";
    cin >> boyut;
    cout<<"\nDizi elemanlarini girin :\n";
    for(i=0; i<boyut; i++)
    {
        cout << "Elemani girin dizi[" << i << "] : ";
        cin >> dizi[i];
    }
    for(i=0; i<boyut; i++)
    {
        if(dizi[i]%2==0)
            cift++;
        else
            tek++;
    }
    cout << cift << endl;;
    cout << tek << endl;;
}
