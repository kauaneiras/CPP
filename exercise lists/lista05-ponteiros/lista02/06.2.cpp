#include <iostream>
using namespace std;

void entrada(int *valor, int pot){
    cout << "Digite o valor: ";
    cin >> *valor;
    cout << "Digite a potência: ";
    cin >> pot;
};

void potencia(int *valor, int pot){
    for(int i = 0; i < pot; i++){
        *valor = *valor;
    };
};

int main(){
    int valor, pot;
    entrada(&valor, pot);
    potencia(&valor, pot);
    cout << "O valor de " << valor << " elevado a " << pot << " é: " << valor << endl;
    return 0;
};
