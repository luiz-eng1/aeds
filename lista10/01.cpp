#include <iostream>
#include <vector>
using namespace std;

class Cliente{
    private:
    string nome;
    string dataNascimento;
    string endereco;
    int telefone;

    public:


    // construtor
    Cliente(string n,string DataNasc, string m, int i){
        nome = n;
        dataNascimento = DataNasc;
        endereco = m;
        telefone = i;
    }

    void exibirDados(){
        cout << "Nome: " << nome << endl;
        cout << "Data de Nascimento: " << dataNascimento << endl;
        cout<< "Endereço: " << endereco << endl; 
        cout << "Telefone: " << telefone << endl;   
    }

};



int main(){
    // numero de pessoas do vetor
    int  npessoas;
    cout << "Digite o numero de pessoas que quer no vetor: " ;
    cin >> npessoas;
    cin.ignore();

    vector<Cliente> clientes;


    //usuario preenchendo o vetor
    for(int i = 0; i < npessoas; i++){
        string nome, endereco, dataNascimento;
        int  telefone;

        cout << "Digite o nome do " << i + 1 << " º cliente: " ;
        getline(cin, nome);
        
        
        cout << "Digite a Data de Nascimento do " << i + 1 << "º cliente: " ;
        getline(cin, dataNascimento);
        


        cout << "Digite o endereço do " << i + 1 << "º cliente: " ;
        getline(cin, endereco);


        cout << "Digite o numero de telefone do " << i + 1 << "º cliente: " ;
        cin >> telefone;    
        cin.ignore();

        clientes.emplace_back(nome, dataNascimento, endereco, telefone);
    }

    //exibindo o vetor
    for(int i = 0; i < npessoas; i++){
        clientes[i].exibirDados();
    }



    return 0;
}