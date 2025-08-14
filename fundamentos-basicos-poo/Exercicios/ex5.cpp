#include <iostream> 
#include <string> 

class Pessoa{ 
    private: 
        std::string nome; 
        int idade; 

    public: 
        Pessoa(std::string nomeD, int idadeD): nome(nomeD), idade(idadeD){

        }

    void mostrardados(){ 
        std::cout << "Seu nome é: " << nome << std::endl; 
        std::cout << "Sua idade é: " << idade << std::endl; 

    }

};

int main(){ 
    
    Pessoa pessoa1("Miguel",18);
    Pessoa pessoa2("Duda",19);

    std::cout << "Informações da pessoa 1: " << std::endl; 
    pessoa1.mostrardados();

    std::cout << "Informações da pessoa 2: " << std::endl; 
    pessoa2.mostrardados();
    
    
    return 0; 
}