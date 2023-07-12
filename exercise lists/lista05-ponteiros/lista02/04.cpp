#include <iostream>
using namespace std;

void obtem(int *, int){
    for (int i = 0; i < tamanho; i++){
        cout << "Digite um valor: ";
        cin >> *p++;
    }
}

int main(){
    int tamanho, *p;
    p = new int[tamanho];
    obtem(p, tamanho);
    cout << "Você digitou os seguintes valores: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << *p++ << endl;
    }
    delete [] p;
    return 0;
};
