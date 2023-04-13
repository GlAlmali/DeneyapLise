#include <iostream>
using namespace std;
int main()
{
    int d1[4], d2[4], d3[4];
    int i, j, k;
    for(i=0; i<4;i++)
    {
        cout << "1. Dizinin " << (i+1) << ". elemanini giriniz: ";
        cin >> d1[i];
    }
    cout << endl;
    for(i=0; i<4;i++)
    {
        cout << "2. Dizinin " << (i+1) << ". elemanini giriniz: ";
        cin >> d2[i];
    }
    cout << endl;
    for (i= 0; i<4; i++)
    {
        d3[i] = d1[i] * d2[i];
        cout << "3. Dizinin " << (i+1) << ". elemani: " << d3[i] << endl;
    }
}
