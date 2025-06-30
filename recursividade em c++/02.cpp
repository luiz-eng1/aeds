// fatorial de um numero
#include <iostream>
using namespace std;

int fatorial (int n){
    if(n == 0) return 1;
    return n*fatorial(n-1);

}

int main(){
    int n;
    cout << "Digite um numero para calcular seu fatorial: ";
    cin >> n;
    cout << "o fatorial do numero e " << fatorial(n) << "." <<endl;
}