#include <iostream>
#include <vector>
using namespace std;

class Loja{
    private:
    int telefone;
    string nomeProduto;
    float precoProduto;

    public:


    //construtor
    Loja(int i, string n, float j){
        telefone = i;
        nomeProduto = n;
        precoProduto = j;

    }

    float getPreco(){
        return precoProduto;
    }


    string getNome(){
        return nomeProduto;
    }

   

};




int main(){
    int telefone;
    string nomeProduto;
    float precoProduto;
    // criação do vetor
    vector<Loja> produtos;

    cout << "Qual o telefone da loja?";
    cin >> telefone;
    cin.ignore();

    //usuario preenchendo o vetor

    for(int i = 0; i < 10; i++){
        cout << "Nome do produto " << i + 1 << ":";
        getline(cin, nomeProduto);
        
        
        cout << "Preço do produto " << i + 1 << ":";
        cin >> precoProduto;
        cin.ignore();

        produtos.emplace_back(telefone, nomeProduto, precoProduto);

    }

    // menor valor
    float menor = produtos[0].getPreco();
    string nomeMenor = produtos[0].getNome();
    for (int i = 0; i < 10; i++) {
        if (produtos[i].getPreco() < menor) {
            menor = produtos[i].getPreco();
            nomeMenor = produtos[i].getNome();
        }
    }
    cout << "O menor valor é referente ao produto " << nomeMenor << " e seu valor é " << menor << endl;





     // maior valor
    float maior = produtos[0].getPreco();
    string nomeMaior = produtos[0].getNome();
    for (int i = 0; i < 10; i++) {
        if (produtos[i].getPreco() > maior) {
            maior = produtos[i].getPreco();
            nomeMaior = produtos[i].getNome();
        }
    }
    cout << "O maior valor é referente ao produto " << nomeMaior << " e seu valor é " << maior << endl;




     // valor médio
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += produtos[i].getPreco();
    }
    float media = soma / 10;
    cout << "O valor medio dos produtos é " << media << endl;



   return 0; 
}