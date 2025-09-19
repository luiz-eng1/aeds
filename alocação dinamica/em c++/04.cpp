#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char** ptr = NULL;
    char** ptr = (char**)malloc(sizeof(char*));
    string palavras[n];

    do{
        cout << "Digite a palavra ("FIM" PARA SAIR): ";
        getline(cin, palavras[n]);

        ptr = (char**)realloc(ptr, sizeof(char*)*n+1);

    }while(palavras[n] != "FIM");

    free(ptr);
    return 0;   
}