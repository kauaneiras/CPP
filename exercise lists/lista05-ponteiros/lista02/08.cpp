#include <iostream>
using namespace std;

struct Estudante
{
    int numero, nota, media;
};

void entrada(Estudante *est)
{
    cout << "Digite o numero: ";
    cin >> est-> numero;
    cout << "Digite a nota: ";
    cin >> est-> nota;
    cout << "Digite a média: ";
    cin >> est -> media;
};

void saida(Estudante *est)
{
    cout << "O número é: " << est->numero << endl;
    cout << "A nota é: " << est->nota << endl;
    cout << "A média é: " << est->media << endl;
};

int main(){
    Estudante est, *p_est;
    p_est = &est;
    entrada(p_est);
    saida(p_est);
    return 0;
}
