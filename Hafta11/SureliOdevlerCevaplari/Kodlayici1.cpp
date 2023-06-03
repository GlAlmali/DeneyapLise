//“Ahmet BAYRaKtAR” þeklinde girilen adsoyad için, soyadýnýn
//sadece ilk harfini büyük harfe diðer harflerini küçük harfe çeviren programý yazalým.
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
