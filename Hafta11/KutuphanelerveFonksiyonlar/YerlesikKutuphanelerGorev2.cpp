//Görev 2: Katarlar üzerinde farklý fonksiyonlarýn kullanýmý.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[] = "Bugun hava cok guzel.";
    char str2[] = "Piknige gidelim.";
    char str3[50];
    int uzunluk;

    cout << "str1 katari: " << str1 << endl;
    uzunluk = strlen(str1);
    cout << "str1 katari uzunlugu: " << uzunluk << endl << endl;

    cout << "str2 katari: " << str2 << endl;
    uzunluk = strlen(str2);
    cout << "str2 katari uzunlugu: " << uzunluk << endl << endl;

    strcpy(str3, str1);
    cout << "str3 katari: " << str3 << endl << endl;

    strcat(str1, str2);
    cout << "s1 katari: " << str1 << endl;

    uzunluk = strlen(str1);
    cout << "s1 katari uzunlugu: " << uzunluk << endl << endl;

    if(strcmp(str1,str3)==0)
        cout << "Iki katar birbirine esittir" << endl;
    else
        cout << "Iki katar birbirine esit degildir." << endl;
}
