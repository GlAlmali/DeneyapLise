//Aþaðýdaki programýn ekran çýktýsý nedir?
#include <iostream>
using namespace std;
int sayi=2;
void fonksiyon1()
{
    sayi = 5;
}
void fonksiyon2()
{
    int sayi = 7;
}
int main()
{
    fonksiyon1();
    fonksiyon2();
    cout << sayi;
}
