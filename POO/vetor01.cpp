#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Livro{
    private:
    string autor, titulo;
    int paginas;

    public:
    //construtor
    Livro(){
    }

    //set
    void setAutor(string novoAutor){
        autor = novoAutor;
    }

    void setTitulo(string novoTitulo){
        titulo = novoTitulo;
    }

    void setPaginas(int novoPaginas){
        paginas = novoPaginas;
    }

    //get
    string  getAutor(){
        return autor;
    }
    
    string getTitulo(){
        return titulo;
    }

    int getPaginas(){
        return paginas;
    }

    
};

int main(){
    string autordigitado, titulodigitado;
    int paginasdigitadas;
    Livro livros[5];

    for(int  i = 0; i < 5; i++){
        cout << "Digite O Titulo do livro: ";
        getline(cin, titulodigitado);
        livros[i].setTitulo(titulodigitado);

        cout << "Digite o autor desse livro: ";
        getline(cin, autordigitado);
        livros[i].setAutor(autordigitado);

        cout << "Digite quantas páginas o livro possui: ";
        cin >> paginasdigitadas;
        livros[i].setPaginas(paginasdigitadas);
        cin.ignore();
    }

    for(int i = 0; i < 5; i++){
        cout << "Titulo: " << livros[i].getTitulo() << endl;
        cout << "Autor: " << livros[i].getAutor() << endl;
        cout << "Paginas : " << livros[i].getPaginas() << endl;
    }


    return 0;
}