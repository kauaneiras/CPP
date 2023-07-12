#include <iostream>
using namespace std;

class Livro
{
private:
    string titulo;
    string autor;
    int ano;
    string editora;
};

class Caderno : public Livro
{
private:
    int numFolhas;
    string tipoCapa;
};

class LivroTexto : public Livro
{

private:
    string area;
    string nivel;
};

int main()
{
    return 0;
}
