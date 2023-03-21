#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 0;
    cout << ((x <= y) || (y>0)) << endl; //0
    cout << ((x > 4) && (y==0)) << endl; //1
    cout << (x && !y) << endl; //1
    cout << (!(x-2) || (y+2 > 2)) << endl; //
}
