#include <iostream>
using namespace std;
int main()
{
    int yas;
    cout << "yasinizi giriniz: ";
    cin >> yas;
    if (yas < 18)
        cout << "15 TL";
    else if (yas > 65 )
        cout << "10 TL";
    else
        cout << "20 TL";
    return 0;
}
