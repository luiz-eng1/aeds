#include <iostream>
#include <stdexcept>
using namespace std;

class ErroOperacao : public exception{
    string mensagem;

    public:
    ErroOperacao(const string& msg) : mensagem(msg){}

    const char* what() const noexcept override{
        return mensagem.c_str();
    }
};

class Login{
    private:
    string usuario ;
    string senha ;

    public:

    //construtor
    Login(string n, string s) : usuario(n), senha(s){}
    Login(){}

    void setUsuario(string u){ usuario = u;}
    void setSenha(string s){senha = s;}



    bool logar(){
        if(usuario.empty() || senha.empty()){
            throw ErroOperacao("Usuario ou senha nao informados.");

        }

        if(usuario != "aluno"){
            throw ErroOperacao("Usuario invalido");

        }

        if(senha != "1234"){
            throw ErroOperacao("Senha incorreta");
        }

        return true;

 }


    bool logar(string u, string s){
        setUsuario(u);
        setSenha(s);
        return logar();
    }
};




int main(){
    string nomeDigitado, senhaDigitada;

    cout<<"Digite seu usuario: ";
    getline(cin, nomeDigitado);

    cout << "Digite sua senha: ";
    getline(cin, senhaDigitada);

    try{
        Login login;

        if(login.logar(nomeDigitado, senhaDigitada)){
            cout << "Login realizado com sucesso"<<endl;        
        }
    }catch(const ErroOperacao& e){
        cout <<"Erro: " << e.what() << endl;
    }

    return 0;
}