/*
Escreva um programa que herde herança múltipla (classe C) de duas classes A e
B. Na classe A lê-se um número mediante uma função membro in e mostra-se o
número lido na função membro out. A classe B descreve-se igualmente como a
classe A, e tem as funções membros entrada e saída. Os números lidos nas
classes A e B, devem apenas serem mostrados na classe C, bem como o número
lido e mostrado nessa última classe. Essa classe tem as funções membros
obtem_heranca e mostra_heranca.
Saída:
Digite o nro - a:
Digite o nro - b:
Digite o nro - c:
O valor de a é : 10
O valor de b é: 40
O valor de c é: 90
*/

#include <iostream>
using namespace std;

class A{
    private: int a;
    public:
        void entradaA(){cout << "Digite o nro - a: "; cin >> a;};
        void saidaA(){cout << "O valor de a é: " << a << endl;};
};

class B{
    private: int b;
    public:
        void entradaB(){cout << "Digite o nro - b: "; cin >> b;};
        void saidaB(){cout << "O valor de b é: " << b << endl;};
};

class C : public A, public B{
    private: int c;
    public:
        void entrada(){entradaA(); entradaB(); cout << "Digite o nro - c: "; cin >> c;};
        void mostra(){saidaA(); saidaB(); cout << "O valor de c é: " << c << endl;};
};
        
int main(){
    C c;
    c.entrada();
    c.mostra();
    return 0;
}
