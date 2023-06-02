// Write a program that reads integer values from a 4x4 matrix and displays the product of the elements on the main diagonal 
// (diagonal()) and the sum of the elements outside of it using the out_diagonal() function.

#include <iostream>
using namespace std;

class Matriz{
    private:
        int matriz[4][4];
    public:
        void entrada_dados();
        int diagonal();
        int out_diagonal();
};

void Matriz::entrada_dados(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
};

int Matriz::diagonal(){
    int produto = 1;
    for(int i = 0; i < 4; i++){
        produto *= matriz[i][i];
    }
    cout << "Produto da diagonal principal: " << produto << endl;
    return produto;
};

int Matriz::out_diagonal(){
    int soma = 0;
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i != j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
};

int main(void){
    Matriz m;
    m.entrada_dados();
    m.diagonal();
    m.out_diagonal();
    return 0;
};
