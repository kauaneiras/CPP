#include <iostream>
using namespace std;

class Livro
{
public:
    void mostrar()
    {
        cout << "Livro" << endl;
    }
};

class Caderno : public Livro
{
public:
    void mostrar()
    {
        cout << "Caderno" << endl;
    }
};

class CadernoCiencias : public Caderno
{
public:
    void mostrar()
    {
        cout << "Caderno de Ciências" << endl;
    }
};

int main()
{
    Livro l;
    Caderno c;
    CadernoCiencias cc;

    l.mostrar();
    c.mostrar();
    cc.mostrar();

    return 0;
}
