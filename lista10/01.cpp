#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

// Classe de exceção personalizada
class EntradaInvalidaException : public exception {
private:
    string mensagem;
public:
    EntradaInvalidaException(const string& msg) : mensagem(msg) {}
    const char* what() const noexcept override {
        return mensagem.c_str();
    }
};

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


    try {
        cout << "Digite o número de pessoas que quer no vetor: ";
        cin >> npessoas;
        cin.ignore();

        if (npessoas <= 0) {
            throw EntradaInvalidaException("Número de pessoas inválido. Deve ser maior que zero.");
        }

        vector<Cliente> clientes;

        for (int i = 0; i < npessoas; i++) {
            string nome, endereco, dataNascimento;
            int telefone;

            cout << "\n--- Cadastro do " << i + 1 << "º cliente ---\n";

            cout << "Nome: ";
            getline(cin, nome);

            cout << "Data de Nascimento: ";
            getline(cin, dataNascimento);

            cout << "Endereço: ";
            getline(cin, endereco);

            cout << "Telefone: ";
            cin >> telefone;
            cin.ignore();

            
            clientes.emplace_back(nome, dataNascimento, endereco, telefone);
        }

        cout << "\n===== Lista de Clientes =====\n";
        for (Cliente& c : clientes) {
            c.exibirDados();
        }

    } catch (const EntradaInvalidaException& e) {
        cerr << "\nErro: " << e.what() << endl;
        return 1;
    }

    return 0;
}
