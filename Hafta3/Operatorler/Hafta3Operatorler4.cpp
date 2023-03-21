#include <iostream>
using namespace std;
int main()
{
    float x, y, z;
    x = 2.4;
    y = x;
    z = x + 1.3 + (y * 2.0);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl << endl;

    x = y = 3.4;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    x+= 5.1;  // x = x + 5.1
    y+= y * 2.0; // y = y+ (y * 2.0)
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl; //10.2

    x/= 2.0; // x = x/2
    y*= 3.0; //y=y*3
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;
}
