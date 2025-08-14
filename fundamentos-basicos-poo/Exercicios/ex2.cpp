#include <iostream>

int main(){ 
    std::string nome; 
    int idade; 
    
    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome); 

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if(idade<18){ 
        std::cout << nome << " Voce é menor de idade\n\n";
    }else if(idade >= 18 && idade <60){ 
        std::cout << nome <<" Voce é adulto\n\n"; 
    }else std::cout <<"Parabnés!! " << nome << " voce esta na melhor idade\n\n";

    return 0;
}