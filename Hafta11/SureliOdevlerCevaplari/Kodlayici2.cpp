//Parametre olarak g�nderilen katari�erisinde parametre
//olarak g�nderilen karakteri sayanfonksiyonu yaz�n�z.
//Not: Karakter olarak istedi�iniz birde�er g�nderebilirsiniz...
#include <iostream>
#include <cstring>
using namespace std;
int karakter_say(char metin[], char karakter)
{
    int sayac = 0;
    for(int i=0;i<strlen(metin);i++)
    {
        if(tolower(metin[i])==karakter)
            sayac++;
    }
    return sayac;
}
int main()
{
    char mesaj[] = "Bugun hava cok guzel. Azicik disari cikalim.";
    char karakter = tolower('B');
    cout << "Bu cumlede "<< karakter_say(mesaj,karakter) <<" adet "<< karakter <<" vardir.";
    return 0;
}
