#include <iostream>
using namespace std;

void entrada(int *valor){
    cout << "Digite o valor: ";
    cin >> *valor;
};

void cubo(int *valor){
    *valor = *valor * *valor * *valor;
};

int main(){
    int valor;
    entrada(&valor);
    cubo(&valor);
    cout << "O cubo é: " << valor << endl;
    return 0;
};
