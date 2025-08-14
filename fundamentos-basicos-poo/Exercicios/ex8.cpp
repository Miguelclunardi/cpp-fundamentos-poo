#include <iostream>
#include <string>

class Forma
{
private:
    std::string cor;

public:
    Forma(std::string corD) : cor(corD)
    {
    }

    std::string getCor()
    {
        return cor;
    }
};

class Circulo : public Forma
{
private:
    double raio;

public:
    Circulo(std::string corD, double raioD) : Forma(corD), raio(raioD)
    {
    }

    double getRaio()
    {
        return raio;
    }
};

class Quadrado : public Forma
{
private:
    double lado;

public:
    Quadrado(std::string corD, double ladoD) : Forma(corD), lado(ladoD)
    {
    }

    double getLado()
    {
        return lado;
    }
};

int main()
{
    Circulo Circulo1("Amarelo", 30);
    Circulo Circulo2("Verde", 90);

    Quadrado Quadrado1("Azul", 100);
    Quadrado Quadrado2("Roxo", 45);

    std::cout << " Circulo 1 " << std::endl;
    std::cout << "Cor: " << Circulo1.getCor() << std::endl;
    std::cout << "Raio: " << Circulo1.getRaio() << std::endl;

    std::cout << "\n Circulo 2 " << std::endl;
    std::cout << "Cor: " << Circulo2.getCor() << std::endl;
    std::cout << "Raio: " << Circulo2.getRaio() << std::endl;

    std::cout << "\n Quadrado 1 " << std::endl;
    std::cout << "Cor: " << Quadrado1.getCor() << std::endl;
    std::cout << "Raio: " << Quadrado1.getLado() << std::endl;
    
    std::cout << "\n Quadrado 2 " << std::endl;
    std::cout << "Cor: " << Quadrado2.getCor() << std::endl;
    std::cout << "Raio: " << Quadrado2.getLado() << std::endl;
    

    return 0;
}