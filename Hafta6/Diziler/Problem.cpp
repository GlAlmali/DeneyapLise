#include<iostream>
using namespace std;
int main()
{
    int i, j, satir, sutun, matris1[5][5], matris2[5][5];
    satir = 5;
    sutun = 5;
    cout << "Matrisin elemanlarini sirayla giriniz: " << endl;
    for(i =0; i < satir; i++) {
        for(j=0; j < sutun; j++) {
            cin >> matris1[i][j];
            }
    }
    for(i=0; i < satir; i++) {
        for(j=0; j < sutun; j++) {
            matris2[j][i] = matris1[i][j];
        }
    }
    cout<<"Matrisin Yer Degistirilmis Hali: " << endl;
    for(i=0; i < sutun; i++) {
        for(int j=0; j < satir; j++) {
            cout << matris2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
