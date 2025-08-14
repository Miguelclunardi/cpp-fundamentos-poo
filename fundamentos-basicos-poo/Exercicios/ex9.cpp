#include <iostream> 

class Animal{ 
private: 

public:

virtual void fazerSom(){ 
    std::cout<<"Som de animal"<<std::endl; 
}
};  

class Cachorro: public Animal{
private:

public:

void fazerSom() override {
    std::cout << "Au Au AU"<<std::endl; 
}
};

class Gato: public Animal{
private:

public:

void fazerSom() override {
    std::cout << "Miau Miau"<<std::endl; 
}
};


int main(){
    Animal* ptrAnimal; 

    ptrAnimal = new Cachorro; 

    std::cout << "Cachorro: "; 
    ptrAnimal->fazerSom();


    ptrAnimal = new Gato; 

    std::cout << "Gato: "; 
    ptrAnimal->fazerSom();


    return 0; 
}