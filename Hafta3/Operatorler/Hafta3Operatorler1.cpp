#include <iostream>
using namespace std;
int main()
{
    int a = 23, b = 5;
    cout << "Ekleme: " << (a + b) << endl;
    cout << "Cikarma: " << (a - b) << endl;
    cout << "Carpma: " << (a * b) << endl;
    cout << "Bolme: " << (a / b) << endl;
    cout << "Mod alma: " << (a % b) << endl;
    cout << "Arttirma: " << a++ << endl; //24
    cout << "Arttirma: " << ++a << endl; //25
    cout << "Azaltma: " << b-- << endl; //4
    cout << "Azaltma: " << --b << endl; //3
    return 0;
}
