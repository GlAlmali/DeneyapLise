#include <iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float r, alan, cevre;
    cout << "Yaricap giriniz: ";
    cin >> r;
    alan = pi*r*r;
    cevre = 2*pi*r;
    cout << "Dairenin alani " << alan << endl;
    cout << "Dairenin cevresi : " << cevre << endl;
    return 0;
}
