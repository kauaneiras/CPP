// Write a class "book" with three data members: bookID, "pages," and "price." It should also contain the following member functions:
// - The "get()" function is used for inputting the values.
// - The "display()" function is used for displaying the values.
// - The "set()" function is used for setting the data members using parameters.
// - The "showPrice()" function is used to return the price value.
// The program should create two objects of the class and input values for these objects. Furthermore, the program should display the details of the more expensive book.


#include <iostream>
using namespace std;

class Livro {
  private:
    int livroID;
    int paginas;
    float preco;
  public:
    void obter();
    void mostrar();
    void definir(int, int, float);
    float mostrapreco();


     void obter()
    {
        do{
            cout << "Digite o ID do livro: ";
            cin >> livroID;
            if (livroID < 0){
                cout << "insira um valor de ID válido! " << endl;
            }
        } while ( livroID < 0 );
        do{
            cout << "Digite o número de páginas: ";
            cin >> paginas;
            if (paginas < 0){
                cout << "insira um valor de páginas válido! " << endl;
            }
        } while ( paginas < 0 );
        do{
            cout << "Digite o preço: ";
            cin >> preco;
            if (preco < 0){
                cout << "insira um valor de preço válido! " << endl;
            }
        } while ( preco < 0 );
    };

    void mostrar()
    {
        cout << "ID do livro: " << livroID << endl;
        cout << "Número de páginas: " << paginas << endl;
        cout << "Preço: " << preco << endl;
    };
    void definir(int, int, float){
        livroID = livroID;
        paginas = paginas;
        preco = preco;
    }
    float mostrapreco(){
        return preco;
    }
};



int main(){
    Livro livro1, livro2;
    livro1.obter();
    livro2.obter();
    if (livro1.mostrapreco() > livro2.mostrapreco()){
        livro1.mostrar();
    } else {
        livro2.mostrar();
    }
    return 0;
}
