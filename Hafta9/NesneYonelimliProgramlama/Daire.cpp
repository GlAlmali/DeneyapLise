class Daire {
    float yaricap;
    float pi_sayisi;
public:
    void deger_atama(float ,float);
    float cevre() {
        return 2 * pi_sayisi * yaricap;
    }
    float alan() {
        return pi_sayisi * yaricap * yaricap;
    }
};
void Daire::deger_atama (float x_yaricap, float x_pi_sayisi)
{
    yaricap = x_yaricap; pi_sayisi = x_pi_sayisi;
}
