# Trilha de Fundamentos: Do Zero ao Básico de POO em C++

## Exercício 1: Olá, Mundo! (O Básico do Básico)
**Objetivo:** Configurar o ambiente, compilar e rodar o primeiro programa.  
**Conceitos:** `main()`, `#include <iostream>`, `std::cout`, `std::cin`, variáveis (`int`, `std::string`).  

**Tarefa:**  
- Pergunte o nome e a idade do usuário.  
- Armazene em variáveis apropriadas.  
- Imprima uma mensagem no formato:  

---

## Exercício 2: O Verificador de Idade (Controle de Fluxo)
**Objetivo:** Usar lógica condicional para decisões no programa.  
**Conceitos:** `if`, `else if`, `else`, operadores de comparação.  

**Tarefa:**  
- Peça a idade do usuário.  
- Imprima mensagens diferentes para:
- Menores de idade
- Adultos
- Melhor idade

---

## Exercício 3: Tabuada (Laços de Repetição)
**Objetivo:** Repetir tarefas automaticamente.  
**Conceitos:** Laço `for`.  

**Tarefa:**  
- Peça um número inteiro.  
- Mostre a tabuada de 1 a 10 usando um `for`.  

---

## Exercício 4: O Calculador Simples (Funções)
**Objetivo:** Organizar código em funções reutilizáveis.  
**Conceitos:** Declaração e definição de funções, parâmetros, tipo de retorno.  

**Tarefa:**  
- Crie quatro funções: `somar`, `subtrair`, `multiplicar`, `dividir`.  
- Peça dois números ao usuário e mostre o resultado de cada operação.  

---

## Exercício 5: Meu Primeiro Objeto (Introdução às Classes)
**Objetivo:** Criar sua primeira classe.  
**Conceitos:** `class`, atributos privados, métodos públicos, encapsulamento.  

**Tarefa:**  
- Crie uma classe `Pessoa` com atributos `nome` e `idade` (privados).  
- Adicione métodos para definir e mostrar os dados.  
- Na `main()`, crie um objeto `Pessoa` e utilize os métodos.  

---

## Exercício 6: O Retângulo (Métodos com Lógica)
**Objetivo:** Criar métodos que processam e retornam valores.  
**Conceitos:** Métodos que calculam resultados.  

**Tarefa:**  
- Classe `Retangulo` com atributos `largura` e `altura`.  
- Métodos para calcular área e perímetro.  
- Na `main()`, crie um objeto e mostre seus cálculos.  

---

## Exercício 7: Conta Bancária (Encapsulamento na Prática)
**Objetivo:** Proteger e validar dados internos da classe.  
**Conceitos:** Encapsulamento com métodos de acesso e modificação.  

**Tarefa:**  
- Classe `ContaBancaria` com atributo `saldo` privado.  
- Métodos para depositar, sacar (com validação) e obter saldo.  
- Simule operações na `main()`.  

---

## Exercício 8: O Círculo e o Quadrado (Herança Simples)
**Objetivo:** Reutilizar código com herança.  
**Conceitos:** Classe base, classe derivada, herança pública.  

**Tarefa:**  
- Classe base `Forma` com atributo `cor` e método `getCor()`.  
- Classes derivadas `Circulo` (atributo `raio`) e `Quadrado` (atributo `lado`).  
- Crie objetos, defina atributos e use métodos herdados.  

---

## Exercício 9: Animais Falantes (Polimorfismo Básico)
**Objetivo:** Introduzir polimorfismo.  
**Conceitos:** `virtual`, `override`, ponteiros de classe base.  

**Tarefa:**  
- Classe base `Animal` com método `fazerSom()`.  
- Classes `Cachorro` e `Gato` sobrescrevem esse método.  
- Use um ponteiro `Animal*` para demonstrar o polimorfismo.  
