#include <iostream>
#include <stdexcept>
using namespace std;



class Calculadora{
    private:

    double a;
    double b;

    public:
    
    // construtor
    Calculadora(double n, double m){
        a = n;
        b = m;
    }

    void dividir(){
        if(b == 0){
            throw runtime_error("Divisão por zero não é permitida!");
        }
        double resultado = a/b;
        cout << "O resultado da divisao e " << resultado << endl;
    }
};



int main(){
    double a,b;

    cout<< "Digite o primeiro numero (A): " ;
    cin >> a;
    

    cout << "Digite o segundo numero (B): ";
    cin >> b;

    Calculadora operacao(a,b);

    try{ 
        operacao.dividir();
    }catch(runtime_error &e){
        cout << "Erro capturado: " << e.what() << endl;
    }


    return 0;
}
