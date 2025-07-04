#include <iostream> 
#include <string>
using namespace std;


class ContaBancaria{
    private:
    string titular;
    double saldo;

    public:
    //set
    void setTitular(string novoTitular){
        titular = novoTitular;
    }

    void setSaldo(double novoSaldo){
        if(novoSaldo < 0){
            return;
        }
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
        cout << "Diigte o valor que deseja depositar: ";
        cin >> valor;
        saldo += valor;

    }


    void sacar(){
        double valor;
        cout << "Digite o valor que deseja sacar: ";
        cin >> valor;
        saldo -= valor;
    }
};


int main(){
    
    string titulardigitado;
    double saldodigitado;
    ContaBancaria conta;

    cout << "Digite qual o titular da conta: ";
    getline(cin, titulardigitado);
    conta.setTitular(titulardigitado);

    conta.setSaldo(1000);

    conta.depositar();
    conta.sacar();

    cout << "Titular:" << conta.getTitular() << endl;
    cout << "Saldo da conta: " << conta.getSaldo() << endl;
    return 0;
}