//Descrição: Crie um programa que leia n números inteiros do usuário e armazene-os dinamicamente usando malloc. Depois, imprima os números.
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;

    cout << "Quantos números deseja digitar? ";
    cin >> n;

    int* ptr = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n ; i++){
        cout << "Digite o numero " << i+1 << ":";
        cin >> n[i];
    }
    

    for(int i = 0; i < n; i++){
        cout << "Os numeros digitados foram : " << n[i] << ".";
    }

    free(ptr);
    return 0;
}