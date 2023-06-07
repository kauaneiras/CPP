/* Escreva um programa que utilize vetores numeros, quadrado, cubo
e soma cada um contendo 5 (cinco) elementos. O vetor numeros
armazena os valores dos índices, o vetor quadrado armazena os
quadrados dos índices, o vetor cubo armazena o cubo dos índices e o
vetor soma armazena os índices correspondentes dos três vetores. O
programa deve mostrar os valores de todos os vetores, e total de todos
os valores no vetor soma. */

#include <iostream>

using namespace std;

int main()
{
    int numeros[5], quadrado[5], cubo[5], soma[5];

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = i;
        quadrado[i] = i * i;
        cubo[i] = i * i * i;
        soma[i] = numeros[i] + quadrado[i] + cubo[i];
    }

    cout << "numeros: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "quadrado: ";
    for (int i = 0; i < 5; i++)
    {
        cout << quadrado[i] << " ";
    }
    cout << endl;

    cout << "cubo: ";
    for (int i = 0; i < 5; i++)
    {
        cout << cubo[i] << " ";
    }
    cout << endl;

    cout << "soma: ";
    for (int i = 0; i < 5; i++)
    {
        cout << soma[i] << " ";
    }
    cout << endl;

    return 0;
}

