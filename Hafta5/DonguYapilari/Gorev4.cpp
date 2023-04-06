#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    for(int i=1; i<=10;i++)
        cout << 50 + rand() % 50 <<endl;
}
