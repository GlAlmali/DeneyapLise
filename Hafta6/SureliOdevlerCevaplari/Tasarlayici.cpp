//Okul müdürü, Kimya ve Biyoloji dersini alan 6 öðrencinin not ortalamalarýný merak etmektedir.
//Bunun için Biliþim Teknolojileri uzmanýndan kendisi için bir program yazmasýný ister.
//Biliþim teknolojileri uzmaný bu programý yazmak için iki boyutlu dizilerden yararlanýr.
//Buna göre hazýrlanan programý tasarlayýnýz.
#include <iostream>
using namespace std;
int main()
{
    int notlar[2][6] = {{85, 73, 92, 95, 80, 78},
                        {69, 76, 87, 65, 90, 50}};
    int top1 = 0, top2 = 0, n = 6;
    float ort1, ort2;
    cout << "Kimya Notlari: " << endl;
    for (int i=0; i < n; i++)
    {
        cout << notlar[0][i] << " ";
        top1 += notlar[0][i];
    }
    cout << "\nBiyoloji Notlari: " << endl;
    for (int i=0; i < n; i++)
    {
        cout << notlar[1][i] << " ";
        top2 += notlar[1][i];
    }
    ort1 = (float)top1 / n;
    cout << "\nKimya ortalamasi: " << ort1 << endl;
    ort2 = (float)top2 / n;
    cout << "\nBiyoloji ortalamasi: " << ort2 << endl;
    return 0;
}
