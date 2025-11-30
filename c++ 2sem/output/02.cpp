#include <iostream>
using namespace std;

class Carro{

    private:
    string marca;
    int velocidade;

    public: 
    //construtor
    Carro(string n){
        marca = n;
        velocidade = 0;
    }

    void acelerar(int x){
        if(velocidade > 200 ){
            cout << "A velocidade nao pode estar acima de 200K/h"<< endl;
            return;
        }
        velocidade += x;
        
    }

    void frear(int x){
        if(velocidade < 0){
            cout << "Velociadade nao pode estar negativa. " << endl;
            return;
        }
        velocidade -= x;
        
    }

    string getMarca(){
        return marca;
    }

    int getVelocidade(){
        return velocidade;
    }



};


int main(){
    Carro c1("BMW");
    c1.acelerar(40);
    cout << "Velocidade atual: " << c1.getVelocidade() << endl;

    c1.frear(30);
    cout << "Velocidade atual: " << c1.getVelocidade() << endl;
    
    return 0;
}