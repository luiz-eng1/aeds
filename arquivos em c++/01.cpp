#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo ("texto.txt");
    string nomes[5];
    if(!arquivo){
        cout<<"Não foi possivel abrir o arquivo";
        return 1;
    }

    for(int i = 0; i < 5; i++){
        cout << "Digite o " << i+1 << " nome:";
        getline(cin, nomes[i]);
        arquivo << nomes[i] << endl;
    }
    arquivo.close();

    return 0;
}