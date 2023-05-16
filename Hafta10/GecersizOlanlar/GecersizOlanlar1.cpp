#include <iostream>
using namespace std;
class Meyve
{
public:
    void brans() {
        cout << "Matematik Ogt" << endl;
    }
};
class Elma : public Meyve
{
public:
    void renk() {
        cout << "Kýrmýzýyým" << endl;
    }
};
int main()
{
    SinifOgt ogt1, ogt2;
    ogt1.brans();
    ogt2.Ogretmen::brans();
    return 0;
}
