#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class ErroOperacao : public exception {
    string mensagem;
public:
    ErroOperacao(const string& msg) : mensagem(msg) {}

    const char* what() const noexcept override {
        return mensagem.c_str();
    }
};

class contaCorrente {
protected: // é protected para conseguir acessar na classe derivada
    float saldo;

public:
    // construtor
    contaCorrente(float p) {
        saldo = p;
    }

    void depositar(float qtd) {
        cout << "Digite uma quantia para depositar: ";
        cin >> qtd;
        saldo += qtd;
        cout << "A quantia foi depositada com sucesso.\n";
    }

    virtual void sacar(float qtd) {
        cout << "Digite uma quantia que deseja sacar (Taxa de operação de 0,5% para saques): ";
        cin >> qtd;
        float debito = qtd * 0.05 + qtd;
        if (qtd > getSaldo()) {
            throw ErroOperacao("Erro: valor de saque inválido!");
            
        }
        saldo -= debito;
        cout << "O saque foi efetuado com sucesso.\n";
    }

    float getSaldo() {
        return saldo;
    }

    void mostrarSaldo() {
        cout << "O saldo da sua conta é R$ " << saldo << ".\n";
    }
};

class contaEspecial : public contaCorrente {
public:
    // construtor
    contaEspecial(float p) : contaCorrente(p) {}

    void sacar(float qtd) override {
        cout << "Digite uma quantia que deseja sacar (Taxa de operação de 0,1% para saques): ";
        cin >> qtd;
        float debito = qtd * 0.01 + qtd;
        if (qtd > getSaldo()) {
            throw ErroOperacao("Erro: valor de saque inválido!");
            
        }
        saldo -= debito;
        cout << "O saque foi efetuado com sucesso.\n";
    }
};

int main() {
    float saldo;
    int escolha, operacao;

    try {
        cout << "Informe o saldo inicial da conta: ";
        cin >> saldo;

        cout << "Escolha o tipo da sua conta - (1) Conta normal  (2) Conta Especial: ";
        cin >> escolha;

        contaCorrente* conta = nullptr;
        switch (escolha) {
            case 1:
                conta = new contaCorrente(saldo);
                break;
            case 2:
                conta = new contaEspecial(saldo);
                break;
            default:
                throw ErroOperacao("Opção inválida de conta!");
        }

        cout << "Qual operação deseja realizar? (1) Depósito  (2) Saque  (3) Ver saldo: ";
        cin >> operacao;

        switch (operacao) {
            case 1:
                conta->depositar(0);
                break;
            case 2:
                conta->sacar(0);
                break;
            case 3:
                conta->mostrarSaldo();
                break;
            default:
                throw ErroOperacao("Opção inválida de operação!");
        }

        conta->mostrarSaldo();
        delete conta;
    }
    catch (const ErroOperacao& e) {
        cout << "Exceção capturada: " << e.what() << endl;
    }

    return 0;
}