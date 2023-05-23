//Görev 1: 'a' karakteri ile ilgili örnek kullaným ve ekran çýktýsý aþaðýdaki gibidir.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char c='a';
    if(isalpha(c))
        cout << "Bu bir harftir."<<endl;
    else
        cout << "Bu bir harf degildir."<<endl;
    if(isdigit(c))
        cout << "Bu bir rakamdir."<<endl;
    else
        cout << "Bu bir rakam degildir."<<endl;
    if(islower(c))
        cout << "Bu bir kucuk harftir."<<endl;
    if(isupper(c))
        cout << "Bu bir buyuk harftir."<<endl;
}
