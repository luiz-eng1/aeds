//criar classe funcionario e herdar gerente

#include <iostream>
using namespace std;


class Funcionario{
    private:
    string nome;
    float salario;
    public:
    //construtor
    Funcionario(string n, float i){
        nome = n;
        salario = i;
    }

    void exibirDados(){
        cout << "O nome e " << nome << "e seu salario e R$ " << salario << endl;
    }
};

class Gerente: public Funcionario{
    float bonus;

    Gerente(string n, float i, float j){
        nome = n;
        salario = i;
        bonus = j;
    }

    void exibirDados(){
        cout << "O nome do gerente e " << nome << "seu salario e " << salario << "e seu bonus e " << bonus << endl;
    }
}

int main (){
    Funcionario F1("Gabriel", 3400);
    Gerente G1("Edvaldo", 6400);

    F1.exibirDados();
    G1.exibirDados();

    return 0;
}