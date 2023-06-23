*/
Escreva um programa que declare duas classes e define a relação entre elas usando
herança pública. Uma classe é Pai e outra é Filho. O seu programa deve mostrar:
Saída:
Digite o primeiro nro:
Digite o segundo nro:
O primeiro nro é a = 40
O primeiro nro é b = 90
*/

#include <iostream>
using namespace std;

class Pai{
    private: int a; 
    public: 
    void entradaPai(){cout << "Digite o primeiro nro: "; cin >> a;}; 
    void mostraPai(){cout << "O primeiro nro é a = " << a << endl;}
    };

class Filho : public Pai{
    private: int b;
    public:
    void entrada(){entradaPai(); cout << "Digite o segundo nro: "; cin >> b;};
    void mostra(){mostraPai(); cout << "O segundo nro é b = " << b << endl;}
};

int main(){
    Filho f[40];
    int i = 0;
    do{
        f[i].entrada();
        f[i].mostra();
        i++;
    } while(i < 40);
    return 0;
}
