#include <stdio.h>
#include <math.h>

int main() {
  // Defina uma variavel contendo todas as moedas e cedulas possiveis.
  const int bills[6] = {500, 100, 50, 10, 5, 1};

  // Defina as variaveis que vou utilizar.
  int price, paid;

  // Pegue o valor do preço e quanto foi pago.
  scanf("%d\n%d", &price, &paid);

  // Se o valor pago for igual ao valor do produto, nao temos que calcular nada.
  if (price == paid) {
    for (int i = 0; i < 6; i++)
      printf("0\n");
    
    return 0;
  }

  // Calcule o troco.
  int change = paid - price;

  for (int i = 0; i < 6; i++) {
    // Pegue a atual moeda/cedula.
    const int bill = bills[i];

    // Calcule quantas cedulas seriam necessarias para pagar o troco.
    const int amount = change / bill;

    // Caso a gente possa usar essa cedula, 'pague' o usuario e decremente o valor pago.
    if (amount > 0) {
      change -= bill * amount;
    }

    // Printe a quantidade de cedulas utilizadas.
    printf("%d\n", amount);
  }

  return 0;
}
