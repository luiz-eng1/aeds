#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
    int n;
    cout << "Qual o tamanho da string? ";
    cin >> n;

    char* ptr = (char*)malloc(sizeof(char) *(n + 1));

    cin.ignore();

    cout << "Digite a string: ";
    cin.getline(ptr, n+1);

    cout << "A frase que você digitou foi : " << ptr << endl;
    free(ptr);


    return 0;
}



