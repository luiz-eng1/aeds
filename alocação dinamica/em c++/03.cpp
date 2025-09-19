#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int* ptr = (int*)malloc(sizeof(int));
    int contador = 0;
    int n;
    

    do{
        cout << "Digite um numero : ";
        cin >> n;
        contador++;
        ptr[contador] = n;
        ptr = (int*)realloc(ptr, sizeof(int)*n+1);
        
    }while(n != -1);

    free(ptr);
    return 0;
}