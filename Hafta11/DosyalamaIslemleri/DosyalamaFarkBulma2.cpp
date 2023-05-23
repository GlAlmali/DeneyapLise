#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream dosya;
    dosya.open("deneyap.txt",ios::app);
    dosya << "Merhaba Deneyap!" << endl;
    dosya.close();
}
