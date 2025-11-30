#include <iostream>
using namespace std;


class Produto{
    private: 

    //atributos
    string nome;
    double preco;
    int quantidade;

    public:

    //construtor
    Produto(string n, double d, int i){
        nome = n;
        preco = d;
        quantidade = i;
    }


    // setter
    void setPreco(double d){
        if(d < 0){
            cout << "Preço nao pode ser negativo! ";
            return;
        }
        preco = d;
    }

    void setQuantidade(int i){
        if(i < 0){
            cout << "Quantidade nao pode ser negativo! ";
            
        }
        quantidade = i;
    }

    //getters
    double getPreco(){
        return preco;
    }

    string getNome(){
        return nome;
    }

    int getQuantidade(){
        return quantidade;
    }


    //metodo
    double valorTotal(){
        return preco * quantidade;
    }

};


int main(){
    Produto p1("Toddy", 20.67, 80);

    cout<<"Produto: " << p1.getNome() << "Preço: " << p1.getPreco() << "Quantiade: " << p1.getQuantidade() ;


    //alterando preço e quantiade com setters
    p1.setPreco(31.50);
    p1.setQuantidade(100);

    cout<< "Novo Preço : " << p1.getPreco() <<endl;
    cout << "Nova Quantidade: "<< p1.getQuantidade() <<endl;

    cout << "Valor total do estoque: " << p1.valorTotal() << endl;
    return 0;
}