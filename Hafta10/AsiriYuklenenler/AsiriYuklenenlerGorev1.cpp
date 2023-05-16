//Farklý parametre sayýsý kullanarak fonksiyon aþýrý yüklem
#include <iostream>
using namespace std;
class Topla
{
public:
    int ekle(int a,int b){
        return a + b;
    }
    int ekle(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main(void) {
    Topla f;
    cout << f.ekle(21, 13) << endl;
    cout << f.ekle(21, 13, 30) << endl;
    return 0;
}
