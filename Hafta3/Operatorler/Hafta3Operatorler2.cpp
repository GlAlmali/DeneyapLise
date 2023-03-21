#include <iostream>
using namespace std;
int main()
{ int x = 5, y = 4;
    cout << (x < y) << endl; //0
    cout << (x > y) << endl; //1
    cout << ((x-1) <= y) << endl; //1
    cout << (x >= (y+2)) << endl; //0
    cout << (x == y) << endl; //0
    cout << (x != y) << endl; //1
}
