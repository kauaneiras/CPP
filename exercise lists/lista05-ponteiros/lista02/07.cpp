#include <iostream>
using namespace std;

struct Livro
{
    char titulo[50];
    char autor[30];
    int ano;
};

void ler(Livro *livro)
{
    cout << "Digite o título: ";
    cin >> livro->titulo;
    cout << "Digite o autor: ";
    cin >> livro->autor;
    cout << "Digite o ano: ";
    cin >> livro->ano;
};

int main ()
{
    Livro livro, *p_livro;
    p_livro = &livro;
    ler(p_livro);
    cout << "Título: " << p_livro->titulo << endl;
    cout << "Autor: " << p_livro->autor << endl;
    cout << "ano: " << p_livro->ano << endl;
    return 0;
};
