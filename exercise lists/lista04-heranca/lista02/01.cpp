/*
Escreva uma classe Pessoa que tenha como atributos Id (Identidade), Nome e
Endereço. Ela tem um construtor para inicializar, uma função membro para
entrada (entrada ( )) e uma função membro para mostrar (mostra( ))os dados
membros. Crie outra classe Estudante que herda a classe Pessoa. Ela tem como
atributos adicionais a matrícula e a nota. Que também tenha uma função membro
para entrada() e mostra() , para mostrar os atributos dessa classe. 
*/

#include <iostream>

using namespace std;

class Pessoa{
    private: int Id; char Nome[30], Endereco[30], Identidade[30];
    public:
        Pessoa(){ Id = 0; Nome[0] = '\0'; Endereco[0] = '\0'; Identidade[0] = '\0'; };
        void entradaPessoa(){                
                cout << "Digite o ID: "; cin >> Id;
                cout << "Digite o Nome: "; cin >> Nome;
                cout << "Digite o Endereço: "; cin >> Endereco;
                cout << "Digite a Identidade: "; cin >> Identidade;
        };
        void mostraPessoa(){
            cout << "ID: " << Id << endl;
            cout << "Nome: " << Nome << endl;
            cout << "Endereço: " << Endereco << endl;
            cout << "Identidade: " << Identidade << endl;
        };
};


class Estudante : public Pessoa{
    private: int Matricula; float Nota;
    public:
        void entrada(){
            entradaPessoa();
            cout << "Digite a Matricula: "; cin >> Matricula;
            cout << "Digite a Nota: "; cin >> Nota;
        };
        void mostra(){
            mostraPessoa();
            cout << "Matricula: " << Matricula << endl;
            cout << "Nota: " << Nota << endl;
        };
};

int main(){
    Estudante est[2];
    for(int i = 0; i < 2; i++){
        cout << "Insira os dados do estudante " << i + 1 << endl;
        est[i].entrada();
    }
    for(int i = 0; i < 2; i++){
        cout << "Dados do estudante " << i + 1 << endl;
        est[i].mostra();
    }
    return 0;
};
