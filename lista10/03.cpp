#include <iostream>
#include <vector>
using namespace std;

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
        float debito = qtd * 0.005 + qtd;
        if (qtd > getSaldo()) {
            cout << "Você não pode sacar uma quantia maior que seu saldo.\n";
            return;
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
        float debito = qtd * 0.001 + qtd;
        if (qtd > getSaldo()) {
            cout << "Você não pode sacar uma quantia maior que seu saldo.\n";
            return;
        }
        saldo -= debito;
        cout << "O saque foi efetuado com sucesso.\n";
    }
};

int main() {
    float saldo, qtd;
    int escolha, operacao;

    // saldo inicial
    cout << "Informe o saldo inicial da conta: ";
    cin >> saldo;

    // escolha da conta
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
            cout << "Opção inválida\n";
            return 1;
    }

    // operação
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
            cout << "Opção inválida\n";
            return 1;
    }
    conta -> mostrarSaldo();

    delete conta; // libera memória
    return 0;
}
