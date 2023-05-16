#include <iostream>
using namespace std;
class Ogretmen
{
public:
    void brans(){
    cout << "Sinif Ogretmeni" << endl;
    }
};
class MatematikOgretmeni : public Ogretmen
{
public:
    void brans(){
        cout << "Matematik Ogretmeni" << endl;
    }
};
int main(void)
{
    MatematikOgretmeni o1, o2;
    o1.brans();
    o2.Ogretmen::brans();
    return 0;
}
