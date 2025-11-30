#include <iostream>
using namespace std;

class contaBancaria{
    private:
    string titular;
    double saldo;

    public:
    //construtor
    contaBancaria(string n){
        titular = n;
        saldo = 0;
    }

    //metodos
    void depositar(double v){
        if(v <= 0){
            cout << "O valor para deposito tem que ser positivo." << endl;
            return;
        }
        saldo += v;
    }

    void sacar(double v){

        if (v <= 0) {
            cout << "O valor do saque deve ser positivo." << endl;
            return;
        }

        if(v > saldo){
            cout << "Saldo insuficiente para sacar R$ "<< v <<  endl;
            return;
        }

        saldo -= v;
    }

    //getters

    double getSaldo(){
        return saldo;
    }

    string getTitular(){
        return titular;
    }
};


int main(){
    contaBancaria usuario1("Alfredo");

    usuario1.depositar(100);
    usuario1.sacar(30);
    usuario1.sacar(100); //saldo estará insuficiente
    cout << "Saldo final da sua conta : " << usuario1.getSaldo() << endl;

    return 0;
}