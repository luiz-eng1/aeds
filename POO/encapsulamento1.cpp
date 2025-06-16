//Objetivo: Criar uma classe Conta com saldo privado.
#include <iostream>
using namespace std;


class ContaBancaria{
    private:
        float saldo;

    public:
        // construtor
        ContaBancaria(){
        saldo = 0;
        }


        // deposito
        void depositar(float valor){
            if(valor > 0){
                saldo += valor;
                cout << "deposito efetuado com sucesso"<< endl;
            }else{
                cout << "valor de deposito invalido" << endl;
            }
        }

        //saque
         void sacar(float valor) {
        if (valor <= 0) {
            cout << "Valor de saque inválido." << endl;
        } else if (valor > saldo) {
            cout << "O valor do saque é maior que o saldo disponível." << endl;
        } else {
            saldo -= valor;
            cout << "Saque efetuado com sucesso." << endl;
        }
    }




        void verSaldo(){
        cout << "Seu saldo e" << saldo << endl;

        }

    
};

int main(){

    ContaBancaria conta;
    conta.depositar(200);
    conta.verSaldo();
    conta.sacar(100);
    conta.verSaldo();
    conta.sacar(150);


    return 0;

}