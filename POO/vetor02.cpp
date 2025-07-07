#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ContaBancaria{
    private:
    string titular;
    double saldo;

    public:
    //construtor
    ContaBancaria(){}

    //set
    void setTitular(string novoTitular){
        titular = novoTitular;

    }

    void setSaldo(double novoSaldo){
        saldo = novoSaldo;
    }

    //get
    string getTitular(){
        return titular;
    }

    double getSaldo(){
        return saldo;
    }

    void depositar(){
        double valor;
        cout << "Digite o valor que deseja depositar: ";
        cin >> valor;
        saldo += valor;
    }

    void sacar(){
        double valor;
        cout << "Digite o valor que deseja sacar: ";
        cin >> valor;
        saldo -= valor;
    }

    void mostrarSaldo(){
        cout << "O saldo e " << saldo << endl;
    }
};

int main(){
    ContaBancaria contas[3];

    contas[1].sacar();
    contas[1].depositar();
    contas[1].mostrarSaldo();    
    
    contas[2].sacar();
    contas[2].depositar();
    contas[2].mostrarSaldo();

    contas[3].sacar();
    contas[3].depositar();
    contas[3].mostrarSaldo();
    
    return 0;

}