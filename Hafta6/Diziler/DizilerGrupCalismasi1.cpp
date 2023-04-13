#include <iostream>
using namespace std;
int main ()
{
    int d_yili[6] = {2005, 2004, 2003, 2008, 2006, 2002};
    int i;
    for(i=0; i<6; i++)
    {
        cout << i+1 <<". arkadasimin dogum yili: " << d_yili[i] << endl;
    }
    return 0;
}
