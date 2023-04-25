//Ekrana 10 kez deneyap ardýndan 2 kez “Merhaba!” yazan ekrana_yaz isimli bir fonksiyon yazalým.
#include <iostream>
using namespace std;
void ekrana_yaz()
{
    for (int i=0; i<10; i++)
    {
        cout << "Deneyap" << endl;
    }
    for (int i=0; i<2; i++)
    {
        cout << "Merhaba" << endl;
    }
}
int main()
{
    ekrana_yaz();
}
