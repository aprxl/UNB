#include <stdio.h>

int main() {
  // Primeiro vamos declarar nossa variáveis. A variável 'consumo' vai ser responsável por guardar
  // o valor do consumo de água, em metros cubicos, dado pela entrada e a variável 'total' vai   
  // controlar o cálculo do preço a pagar. O total da conta de água começa em 7, pois essa é a 
  // tarifa inicial do consumo.
  int consumo, total = 7;

  // Agora pegamos o valor do consumo de água dado pelo usuário.
  scanf("%d", &consumo);

  // Note que a seguir, nós temos uma cadeia de else ifs. Ou seja, apenas um desses
  // ifs será executado.

  // Os primeiros dez metros cúbicos são de graça, portanto, não precisamos calcular nada
  // se o consumo foi menor do que 10m3. Nesse caso, basta imprimir o total.
  if (consumo <= 10) {
    printf("%d\n", total);
  }

  // Já os proximos vinte metros cúbicos, ou seja, de 11 à 30, custam um real por metro
  // cúbico. Então caso tenhamos consumido mais do que dez e menos do que trinta metros cubicos, 
  // vamos descobrir quanto nós consumimos desses trinta metros cúbicos e calcular o total do consumo.
  else if (consumo <= 30) {
    // Vamos primeiro subtrair os dez primeiros metros cúbicos do nosso consumo, pois queremos
    // despreza-los. Fazemos isso para descobrir quanto dos vinte metros cúbicos nós utilizamos.
    consumo -= 10;

    // Como os primeiros dez metros cúbicos são grátis, não precisamos considera-los.
    // Depois adicionamos ao total o nosso consumo multiplicado por seu valor para cada metro cubico.
    total += consumo * 1;
  }

  // Depois, os proximos 70 metros cúbicos, ou seja, de 31 à 100, custam dois reais cada. Então,
  // caso tenhamos cosumido mais do que trinta e menos do que cem metros cúbicos, vamos descobrir
  // quanto nós consumimos desses setenta metros cúbicos e calcular o total do consumo.
  else if (consumo <= 100) {
    // Vamos agora desprezar os primeiros trinta metros cúbicos, pois nós queremos saber apenas quanto
    // nós consumimos dos proximos 70 metros cúbicos.
    consumo -= 30;

    // Agora adicionaremos primeiro o valor dos primeiros 30 metros cúbicos ao total, ou seja, vinte reais.
    // E depois, adicionamos o resto do nosso consumo multiplicado por seu valor para cada metro cúbico.
    total += 20 + consumo * 2;
  }

  // Por fim, qualquer metro cúbico consumido após os primeiros 100 custam cinco reais cada. Então,
  // caso tenhamos consumido mais do que cem metros cúbicos, vamos descubrir quanto nós consumimos
  // depois dos primeiros cem metros cúbicos e calcular o total do consumo.
  else {
    // Primeiro desprezamos os primeiros cem metros cúbicos.
    consumo -= 100;
    
    // E adicionamos o seu valor ao total, ou seja, os primeiros cem metros cúbicos, no total, darão
    // 160 reais. E logo após, adicionamos o consumo excessivo multiplicado por seu valor para cada metro cúbico.
    total += 160 + consumo * 5;
  }

  // Após calcular o preço total, imprime-o.
  printf("%d\n", total);
  return 0;
}
