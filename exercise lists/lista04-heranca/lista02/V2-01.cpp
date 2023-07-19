#include <iostream>
using namespace std;

class Pessoa{
    private: int id; char nome[30], endereco[30];
    public:
        Pessoa(){ id=0; nome[0]='\0'; endereco[0]='\0';};
        void Entrada_Pessoa(){
            do{ cout << "digite o id: "; cin >> id;}while(id == 0);
            do{ cout << "digite o nome: "; cin >> nome;}while(nome[0] == '\0');
            do{ cout << "digite o endereço: "; cin >> endereco;}while(endereco[0] == '\0');
        }
        void Mostra_Pessoa(){cout << "id: " << id << endl << "nome: " << nome << endl << "endereço: " << endereco << endl;};
};

class Estudante: public Pessoa{
    private: int matricula, nota;
    public:
        Estudante(){ matricula=0; nota=0;};
        void Entrada_Estudante(){
            cout << "digite a matricula: "; cin >> matricula;
            cout << "digite a nota: "; cin >> nota;
        }
        void Mostra_Estudante(){
            cout << "matricula: " << matricula << endl << "nota: " << nota << endl;
        }
}; 

int main(){
    char conf; int n = 3, i = 0; Estudante est[n];
    //cout << "digite o número de estudantes: " << endl; cin >> n;
    do{
        while( i < n){
        est[i].Entrada_Pessoa(); est[i].Entrada_Estudante();
        est[i].Mostra_Pessoa(); est[i].Mostra_Estudante();
        cout << "Deseja Realizar a operação novamente? (S/s)" << endl; cin >> conf;
        i++;
        };
    }while(conf == 'S' || conf == 's');
    return 0;
}
