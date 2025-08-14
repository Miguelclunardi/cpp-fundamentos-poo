#include <iostream> 

class ContaBancaria{
    private: 

    double saldo; 

    public: 
        ContaBancaria(double saldoD): saldo(saldoD){

        }

    void Deposit(double valor){
        if (valor>0) { 
            saldo += valor;
            std::cout <<"\nDeposito realizado com sucesso\n\n"; 
        }else std::cout << "Erro! Valor negativo \n\n"; 
        
    }

    void Sacar(double valor){
        if (valor>0 && valor<=saldo) { 
            saldo -= valor;
            std::cout<<"\nSaque realizado com sucesso\n\n";
        }else std::cout << "Erro! Valor negativo ou saldo insuficiente\n\n"; 
        
    }

    void getSaldo(){
        std::cout <<"\nO seu saldo é de: " << saldo << std::endl; 
    } 

};


int main(){
    double saldoD=0, valorD=0;
    std::cout << "Qual seu saldo inicial: \n\n"; 
    std::cin>> saldoD;
    ContaBancaria conta1(saldoD);
    
    int esc = 0;

    do
    {
        std::cout <<"\nMENU\n\n";
        std::cout <<"1 - Para depositar\n";
        std::cout <<"2 - Para sacar\n";
        std::cout <<"3 - Para ver saldo\n\n";
        std::cout <<"4 - Para sair\n\n";
        std::cin >> esc;
        
        switch (esc)
        {
        case 1:
            std::cout <<"\nDigite o valor para depositar\n\n";
            std::cin >> valorD; 
            conta1.Deposit(valorD);
            break;
        case 2:
            std::cout <<"\nDigite o valor para sacar\n\n";
            std::cin >> valorD; 
            conta1.Sacar(valorD);
            break;
        case 3:
            conta1.getSaldo();
            break;
            case 4:
            std::cout<<"\nObrigado, tchau\n\n"; 
            break;
        default:
            std::cout <<"\nErro, escolha certo\n\n";
            break;
        }

    } while (esc != 4);
    
    return 0; 
}