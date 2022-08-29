#include <stdio.h>
#include <math.h>

// Primeiro declaramos uma função chamada 'amount_of_digits' que retorna uma variável 'int'.
// Essa função essencialmente determinará o número de dígitos que um número possui através
// do resultado do logaritmo de base 10 desse mesmo número.
//
// EXEMPLO
//    Utilizaremos o número 100 para facilitar nossa vida.
//    O resultado de log10(100) dará 2, pois 10^2 é igual a 100.
//    Dai adicionamos um ao resultado do logaritmo para dar o número de digitos de 100, ou seja,
//    2 + 1 = 3.
//
int amount_of_digits(int n) {
  // Aqui calculamos o número de digitos que 'n' tem.
  // O '(int)' serve para converter o resultado de 'log10'
  // para um tipo int, pois ele originalmente retorna um 'double'.
  return (int) log10(n) + 1;
}

// E agora declaramos outra função chamada 'prime' que retorna '1' caso o número especificado
// seja primo, e '0' caso ele não seja.
int prime(int n) {
  // Primeiro checamos se o número é igual a 0 ou 1.
  // Caso seja, ele não é primo.
  if (n == 0 || n == 1) {
    // Retorne zero e ignore o codigo abaixo.
    return 0;
  }
  
  // Agora vamos checar se esse número é divisível por qualquer número entre
  // dois e n divido por dois. O motivo de usarmos 'n divido por dois' é porque
  // o maior divisor de um número, diferente dele mesmo, é um número que quando 
  // multiplicado pelo menor inteiro diferente de um (ou seja, dois) será igual
  // o próprio número.
  for (int i = 2; i <= n/2; i++) {

    // Aqui dentro checamos se o resto da divisão de 'n' por 'i' é igual a zero.
    // Se essa divisão tiver resto zero, o número 'n' possui um divisor diferente
    // de um e ele mesmo. Portanto, ele não é primo.
    if (n % i == 0) {
      // Retorne zero e ignore o codigo abaixo.
      return 0;
    }
  }

  // Caso o codigo acima não tenha definido o número 'n' como não-primo,
  // podemos assumir com certeza que 'n' é de fato primo. Então, retorne um.
  return 1;
}

int main() {
  // Declare a variável 'n' que corresponde à quantidade de números que vamos testar.
  int n;

  // Pegue o valor de 'n' dado pelo usuário.
  scanf("%d", &n);

  // Agora crie uma array (ou uma lista) de inteiros com tamanho igual a 'n'.
  // Nós vamos salvar os números que o usuário quer especificar aqui dentro.
  int x[n];

  // Faça um for loop que repita 'n' vezes.
  for (int i = 0; i < n; i++) {
    // Pegue o valor de cada um dos números que vamos testar e salve-o em seu respectivo
    // lugar dentro da lista 'x'.
    scanf("%d", &x[i]);
  }

  // Agora vamos fazer um outro loop que se repete 'n' vezes. 
  for (int i = 0; i < n; i++) {
    // Agora vamos pegar o número da posição 'i' da lista.
    const int current = x[i];

    // E depois calculamos quantos digitos esse número tem utilizando nossa função 'amount_of_digits'.
    const int digits = amount_of_digits(current);

    // E vamos também assumir inicialEssencialmentemente que esse número é um primo arrojado e depois fazer os testes para
    // sabermos se ele realmente é, ou não. Eu não sei e não consegui achar a tradução de 'arrojado' para o 
    // inglês, então eu chamei ele de estranho :)
    int is_weird_prime = 1;
    
    // Agora vamos fazer outro for loop aqui dentro que repetirá para cada um dos digitos do número 'current'.
    for (int j = 0; j < digits; j++) {
      // Aqui precisamos pegar apenas parte do número 'current'. Para isso, vamos dividindo ele por 
      // crescentes múltiplos de 10. 
      //
      // A função 'pow(x, y)' é o equivalente de elevarmos x a y (x^y). Na linguagem C, não temos um operador
      // aritmético para potenciação.
      //
      // EXEMPLO
      //     Caso 'current' seja 1234, nós iremos fazer o seguinte:
      //      - para j = 0, ( 1234 / 10^0 ) -> ( 1234 / 1 ) = 1234;
      //      - para j = 1, ( 1234 / 10^1 ) -> ( 1234 / 10 ) = 123;
      //      - para j = 2, ( 1234 / 10^2 ) -> ( 1234 / 100 ) = 12;
      //                                ...
      //
      //     Note que estamos utilizamos inteiros, então as partes fracionárias são
      //     ignoradas. E, da mesma forma que antes, convertemos o resultado de 'pow'
      //     para uma variável 'int'.
      //
      const int adjusted = (current / (int) pow(10, j));
      
      // Aqui calculamos se o número encontrado acima não é primo.
      // Se esse for o caso, então o nosso número 'current' não é um primo arrojado.
      if (!prime(adjusted)) {
        // Mudamos o valor dessa variável para '0', ou seja, falso, pois definimos
        // que 'current' não é um primo arrojado.
        is_weird_prime = 0;

        // Printamos 'N' para todos os números que não forem primos arrojados.
        printf("N\n");

        // Saímos do escopo do for. Basicamente, a gente fala pro for parar
        // bem aqui e não continuar repetindo o processo acima pois já temos
        // nosso resultado.
        break;
      }
    }
    
    // Caso o algoritmo acima não tenha definido mudado o valor de 'is_weird_prime' para zero,
    // podemos afirmar que o número 'current' é, de fato, um primo arrojado.
    if (is_weird_prime) {
      // Printamos 'S' para todos os números que são primos arrojados.
      printf("S\n");
    }
  }

  return 0;
}
