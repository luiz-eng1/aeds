// soma dos algarismos de um número

#include <iostream>
using namespace std;


int recursividade(int n){
    if(n <= 0) return 0; // caso base

    return recursividade(n / 10) + (n%10);
}

int main(){
    int n, resultado;
    cout << "Digite o numero: ";
    cin >> n;
    
    cout << "o resultado é " << recursividade(n)<< endl;
}