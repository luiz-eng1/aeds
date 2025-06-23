#include <iostream>
#include <vector>
#include <stdexcept> 
using namespace std;

// classe de exceção 
class ErroOperacao : public exception {
    string mensagem;
public:
    ErroOperacao(const string& msg) : mensagem(msg) {}

    const char* what() const noexcept override {
        return mensagem.c_str();
    }
};


class LotoFacil {
private:
    vector<int> numerosEscolhidos;

public:
    // metodo especializado para adicionar um número
    void adicionarNumero(int n) {
        if (n < 1 || n > 25)
            throw ErroOperacao("Número fora do intervalo permitido (1-25).");

        for (int num : numerosEscolhidos) {
            if (num == n)
                throw ErroOperacao("Número repetido.");
        }

        numerosEscolhidos.push_back(n);
    }

    void exibirNumeros() {
        cout << "Números escolhidos: ";
        for (int num : numerosEscolhidos) {
            cout << num << " ";
        }
        cout << endl;
    }
};

// Função principal
int main() {
    LotoFacil jogo;
    int numero;

    for (int i = 0; i < 15; ) {
        try {
            cout << "Digite o " << i + 1 << "º número (1 a 25): ";
            cin >> numero;

            jogo.adicionarNumero(numero);
            i++; 

        } catch (const ErroOperacao& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }

    jogo.exibirNumeros();

    return 0;
}
