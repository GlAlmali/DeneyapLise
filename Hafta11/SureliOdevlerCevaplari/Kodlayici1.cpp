//�Ahmet BAYRaKtAR� �eklinde girilen adsoyad i�in, soyad�n�n
//sadece ilk harfini b�y�k harfe di�er harflerini k���k harfe �eviren program� yazal�m.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char mesaj[] = "Ahmet BAYRaKtAR";
    int kelimeSayisi = 0;
    bool bosluk = false;
    for(int i=0; i<strlen(mesaj);i++)
    {
        if(bosluk)
        {
            mesaj[i] = tolower(mesaj[i]);
        }
        if(mesaj[i] == ' ')
        {
            bosluk = true;
            mesaj[i+1] = toupper(mesaj[i+1]);
            i++;
        }
    }
    cout << mesaj ;
    return 0;
}
