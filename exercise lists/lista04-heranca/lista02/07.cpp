#include <iostream>
using namespace std;

class Area{
    protected:
        int comp, alt;
    public:
        void entrada_A(){
            cout << "Digite o comprimento: ";
            cin >> comp;
            cout << "Digite a altura: ";
            cin >> alt;
        }
};

class Volume: protected Area{
    protected:
        int larg;
    public:
        void entrada(){
            entrada_A();
            cout << "Digite a largura: ";
            cin >> larg;
        }
        void saida(){
            cout << "O volume é: " << comp * alt * larg << endl;
        }
};

int main(){
    Volume v;
    v.entrada();
    v.saida();
    return 0;
}
