#include <iostream>
using namespace std;
int main()
{
    int sayi;
    cin>>sayi;
    if(sayi %2 == 0)
        {
        if(sayi %4 == 0)
            cout << "Sayi cifttir ve 4 ile bolunur";
        else
            cout << "Sayi cifttir ve 4 ile bolunmez";
        }
    else
    {
        if(sayi %3 == 0)
            cout << "Sayi tektir ve 3 ile bolunur";
        else
            cout << "Sayi tektir ve 3 ile bolunmez";
    }
}
