//Grafik programlarında kullanmak üzere nokta nesnelerini
//tanımlamak için bir Nokta sınıfı oluşturalım.
//Noktalar iki boyutlu düzlemde yer alacağından özellik olarak x ve y
//koordinatları olmak üzere iki adet koordinat bilgisine sahiptir.
//Programınızda noktaların sahip olması gereken yetenekler (davranışlar) ise şunlar olmalıdır:
//● Noktalar, düzlemde herhangi bir yere konumlanabilmeli: git fonksiyonu
//● Noktalar bulundukları koordinatları ekranda gösterebilmeli: goster fonksiyonu
//● Noktalar, sıfır (0,0) koordinatında olup olmadıkları sorusunu yanıtlayabilmeli: sifir_mi fonksiyonu
#include <iostream>
using namespace std;
class Nokta{
    int x,y;
    public:
    void git(int, int);
    void goster();
    void sifir_mi();
};
void Nokta::git(int yeni_x, int yeni_y)
{
    x = yeni_x;
    y = yeni_y;
}
void Nokta::goster()
{
    cout << "X noktasi: " << x << ", Y noktasi: " << y << endl;
}
void Nokta::sifir_mi()
{
    if ((x == 0) && (y == 0))
        cout << "n1 su anda sifir noktasindadir." << endl;
    else
        cout << "n1 su anda sifir noktasinda degildir." << endl;
}
int main() {
    Nokta n1,n2;
    n1.git(78,34);
    n1.goster();
    n1.git(61,35);
    n1.goster();
    n1.sifir_mi();
    n2.git(0,0);
    n2.sifir_mi();
    return 0;
}
