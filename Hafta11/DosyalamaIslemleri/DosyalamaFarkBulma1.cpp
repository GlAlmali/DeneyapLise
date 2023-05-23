#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream dosya;
    dosya.open("deneyap.txt");
    dosya << "Merhaba Deneyap!" << endl;
    dosya.close();
}
