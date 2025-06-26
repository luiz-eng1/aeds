#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo("texto.txt");
    string letras[10];
    string linha;
    int contador = 0;

    if(!arquivo){
        cout<<"Nao foi possivel abrir o arquivo";
        return 1;
    }

    for(int i = 0; i < 10; i++){
        cout << "Digite 10 letras, uma por linha:  "<< endl;
        getline(cin, letras[i]);
        arquivo<< letras[i] << endl;
    }

    arquivo.close();

    ifstream leitura("texto.txt");

    if(!arquivo){
        cout << "Nao foi possivel abrir o arquivo";
        return 1;
    }

    while(getline(leitura,linha)){
        contador++;
    }

    cout<<"O arquivo tem " << contador << " linhas.";
    leitura.close();

    return 0;
     
}