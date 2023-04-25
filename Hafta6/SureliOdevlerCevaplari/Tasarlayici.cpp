//Okul m�d�r�, Kimya ve Biyoloji dersini alan 6 ��rencinin not ortalamalar�n� merak etmektedir.
//Bunun i�in Bili�im Teknolojileri uzman�ndan kendisi i�in bir program yazmas�n� ister.
//Bili�im teknolojileri uzman� bu program� yazmak i�in iki boyutlu dizilerden yararlan�r.
//Buna g�re haz�rlanan program� tasarlay�n�z.
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
