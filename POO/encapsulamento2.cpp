// Produto com estoque

#include <iostream>
using namespace std;

class Produto{
    private:
        string nome;
        int quantidade;

    public:


    // construtor
    Produto(string n, int i){
        nome = n;
        quantidade = i;
    }

    // Função adicionar produtos ao estoque
    void adicionarEstoque(int qtd){
        
        if(qtd> 0){
            quantidade += qtd;
            cout << "Adicionado  "<< qtd << " ao estoque" << endl;
        }else{
            cout << "Quantidade invalida para adicionar" << endl;
        }
    }

    //Função vender produtos
    void vender(int qtd) {
        if (qtd <= 0) {
            cout << "Quantidade inválida para venda." << endl;
        } else if (qtd > quantidade) {
            cout << "Não é possível vender mais do que há em estoque." << endl;
        } else {
            quantidade -= qtd;
            cout << "Você vendeu " << qtd << " unidades de " << nome << "." << endl;
        }
    }



    //Função mostrar produtos do estoque
    void mostrarEstoque(){
        cout <<"Estoque de  "<< nome "tem " << quantidade << " produtos" << endl;
    }

};

int main (){

    Produto produto1("Caneta", 20);

    produto1.mostrarEstoque();
    produto1.adicionarEstoque(15);
    produto1.mostrarEstoque();
    produto1.vender(5);
    produto1.mostrarEstoque();
    produto1.vender(40);
    
    return 0;
}