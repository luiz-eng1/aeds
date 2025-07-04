#include <iostream>
#include <string>
using namespace std;


class Livro{
    private: 
    string titulo;
    string autor;
    int paginas;

    public:

    //construtor
    Livro(string n, string m, string i){
        titulo = n;
        autor = m;
        paginas = i;
    }
    //SETS
    void setTitulo(string novoTitulo){
        titulo = novoTitulo;
    }

    void setAutor(string novoAutor){
        autor = novoAutor;
    }

    void setPaginas(int novoPaginas){
        paginas = novoPaginas;
    }

    //GETS
    string getTitulo(){
        return titulo;
    }

    string getAutor(){
        return autor;
    }

    int getPaginas(){
        return paginas;
    }
};

int main(){
    string titulodigitado, autordigitado;
    int paginadigitada;
    Livro Livro1; // obj
    
    cout << "Digite o titulo do livro:";
    getline(cin, titulodigitado);
    Livro1.setTitulo(titulodigitado);

    cout <<"Digite o autor: ";
    getline(cin, autordigitado);
    Livro1.setAutor(autordigitado);

    cout << "Quantas paginas? ";
    cin >> paginadigitada;
    cin.ignore();
    Livro1.setPaginas(paginadigitada);

    cout << "Título:" << Livro1.getTitulo() << endl;
    cout << "Autor: " << Livro1.getAutor() << endl;
    cout << "Paginas: " << Livro1.getPaginas() << endl;

    return 0;
}