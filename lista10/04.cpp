#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Animal {
protected:
    string nome, raca;
    float preco;
    int idade;

public:
    // construtor
    Animal(string n, string m, float f, int i) {
        nome = n;
        raca = m;
        preco = f;
        idade = i;
    }

    // get
    string getNome() { return nome; }
    string getRaca() { return raca; }
    float getPreco() { return preco; }
    int getIdade() { return idade; }

    // set
    void setNome(string n) { nome = n; }
    void setRaca(string m) { raca = m; }
    void setPreco(float f) { preco = f; }
    void setIdade(int i) { idade = i; }

    virtual void exibir() {
        cout << "Nome: " << nome
             << " | Raça: " << raca
             << " | Preço: R$" << preco
             << " | Idade: " << idade << " anos" << endl;
    }
};

class Cachorro : public Animal {
public:
    //construtor
    Cachorro(string n, string m, float f, int i)
        : Animal(n, m, f, i) {}
};

class Gato : public Animal {
public:
    //construtor
    Gato(string n, string m, float f, int i)
        : Animal(n, m, f, i) {}
};

class Petshop {
private:
    vector<Cachorro> cachorros;
    vector<Gato> gatos;

public:
    void addCachorro(Cachorro c) {
        cachorros.push_back(c);
    }

    void addGato(Gato g) {
        gatos.push_back(g);
    }

    void mostrarCachorro() {
        cout << "\n--- Cachorros ---" << endl;
        for (int i = 0; i < cachorros.size(); i++) {
            cachorros[i].exibir();
        }
    }

    void mostrarGato() {
        cout << "\n--- Gatos ---" << endl;
        for (int i = 0; i < gatos.size(); i++) {
            gatos[i].exibir();
        }
    }
};

int main() {
    Petshop loja;
    int opcao;
try{ 
    do {
        cout << "Selecione sua opção: " << endl;
        cout << "\n(1) Adicionar Cachorro (2) Adicionar Gato (3) Listar Todos (0) Sair: ";
        cin >> opcao;
        cin.ignore();

        string nome, raca;
        float preco;
        int idade;

        switch (opcao) {
            case 1:
                cout << "Nome: "; getline(cin, nome);
                cout << "Raça: "; getline(cin, raca);
                cout << "Preço: "; cin >> preco;
                cout << "Idade: "; cin >> idade;
                cin.ignore();

                if (preco < 0 || idade < 0)
                        throw invalid_argument("Preço ou idade não pode ser negativo.");

                loja.addCachorro(Cachorro(nome, raca, preco, idade));
                break;

            case 2:
                cout << "Nome: "; getline(cin, nome);
                cout << "Raça: "; getline(cin, raca);
                cout << "Preço: "; cin >> preco;
                cout << "Idade: "; cin >> idade;
                cin.ignore();

                if (preco < 0 || idade < 0)
                        throw invalid_argument("Preço ou idade não pode ser negativo.");

                loja.addGato(Gato(nome, raca, preco, idade));
                break;

            case 3:
                loja.mostrarCachorro();
                loja.mostrarGato();
                break;

            case 0:
                cout << "Você saiu do sistema" << endl;
                break;

            default:
                throw runtime_error("Opcao invalida");
        }
    } while (opcao != 0);
 }
 catch(const exception& e){
    cout <<"Erro" << e.what() << endl;
 }


    return 0;
}
