// Criar hierarquia com herança. (veiculo - carro e moto)

#include <iostream>
using namespace std;


class Veiculo{
    protected:
    string marca;
    int ano;

    public:

    // construtor
    Veiculo(string n, int i){
        marca = n;
        ano = i;
    }

};


class Carro: public Veiculo{
    public:
    //construtor
    Carro(string n, int i) : Veiculo (n, i){}

    void ligar(){
        cout << "O veiculo esta ligado" << endl;
    }

    void mostrarDados(){
        cout << "A marca do veiculo e " << marca << " e seu ano e " << ano << endl;
    }
};


class Moto: public Veiculo{
    public:
    //construtor
    Moto(string n, int i) : Veiculo (n, i){}


    void ligar(){
        cout << "O veiculo esta ligado" << endl;
    }

    void mostrarDados(){
        cout << "A marca do veiculo e " << marca << " e seu ano e " << ano << endl;
    }
};


int main(){
    string marcaCarro, marcaMoto;
    int anoCarro, anoMoto;

    //Carro 1

    cout << "Digite a marca do primeiro carro: ";
    getline(cin, marcaCarro);
    cout << "Digite o ano do carro: ";
    cin >> anoCarro;
    cin.ignore();
    Carro carro1(marcaCarro, anoCarro);


    // Carro 2 
    cout << "Digite a marca do segundo carro: ";
    getline(cin, marcaCarro);
    cout << "Digite o ano do segundo carro: ";
    cin >> anoCarro;
    cin.ignore();
    Carro carro2(marcaCarro, anoCarro);

    // Moto

    cout << "Digite a marca da moto: ";
    getline(cin, marcaMoto);
    cout << "Digite o ano da moto: ";
    cin >> anoMoto;
    cin.ignore();
    Moto moto1(marcaMoto, anoMoto);


    cout << "Carro 1" << endl;
    carro1.mostrarDados();
    carro1.ligar();



    cout<< "Carro 2" << endl;
    carro2.mostrarDados();
    carro2.ligar();


    cout << "Moto" << endl;
    moto1.mostrarDados();
    moto1.ligar();


    return 0;
}