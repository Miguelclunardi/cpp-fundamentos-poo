#include <iostream> 


class Retangulo{
    private: 
    
    double largura, altura;

    public: 
        Retangulo(double larguraD, double alturaD): largura(larguraD), altura(alturaD){

        }


    double calcularArea(){ 
        return largura*altura;

    }

    
    double calcularPerimetro(){ 
        return 2*(largura+altura);

    }

};


int main(){
    double largura, altura;
    
    std::cout<<"Digite o valor da altura do teu retangulo: " << std::endl; 
    std::cin >>altura; 
    
    std::cout<<"Digite o valor da largura do teu retangulo: " << std::endl; 
    std::cin >>largura;
    
    
    Retangulo retagulo1(largura, altura); 
    
    
    double result = retagulo1.calcularArea(); 
    std::cout<<"Valor da area: "<<result<< "m2"<<std::endl; 
   
    double result2 = retagulo1.calcularPerimetro(); 
    std::cout<<"Valor do perimetro: "<<result2<<std::endl; 
   
    return 0; 
}