#include <iostream> 

double somar(double n1, double n2){

    return n1+n2; 

}


double subs(double n1, double n2){

    return n1-n2; 
}
    
double div(double n1, double n2){

    if(n2==0){ 
        std::cout<<"Error, o divisor não pode ser 0"; 
        return 0; 
    }else return n1/n2; 

}
    
double mult(double n1, double n2){
    return n1 * n2; 

}
    
int main(){
    double result, num1, num2; 
    int escolha; 

    std::cout << "Digite o primeiro valor: \n"; 
    std::cin >> num1; 
    std::cout << "Digite o segundo valor: \n"; 
    std::cin >> num2; 
    
    do{
       
        std::cout << "\nVoce deseja: \n\n1 - Somar digite\n2 - subtrair digite\n3 - dividir digite\n4 - Multiplicar digite\n0 - para sair \n\n" ; 
        std::cin >> escolha; 

        if(escolha ==1){
            result = somar(num1,num2); 
            std::cout <<"A soma de " << num1 << " e " << num2 << " : " << result<<std::endl; 
        }else if(escolha ==2){
            result = subs(num1,num2); 
            std::cout <<"A subtração de " << num1 << " e " << num2 << " : " << result<<std::endl; 
        }else if(escolha == 3){
            result = div(num1,num2); 
            std::cout <<"A divisão de " << num1 << " e " << num2 << " : " << result<<std::endl; 
        }else  if(escolha ==4){
            result = mult(num1,num2); 
            std::cout <<"A multilicacao de " << num1 << " e " << num2 << " : " << result<<std::endl; 
        }

    }while (escolha != 0);

    
    


    return 0; 
}