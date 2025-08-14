#include <iostream>

int main(){ 
    std::string nome; 
    int idade; 

    std::cout << "Digite seu nome: " << "\nDigite sua idade: \n\n"; 
    std::cin >> nome >> idade; 


    std::cout << "Seu nome é: " << nome << "\nSua idade é: " << idade << std::endl;
    return 0;
}