// programa utiliza um ponteiro para imprimir um array inicializado

#include <iostream>
using namespace std;

int main(){
    int x[] = {20, 30, 40, 50, 60};
    int *px;
    px = x;
    for (int i = 0; i < 5; i++){
        cout << *px << endl;
        px++;
    }
    return 0;
};
