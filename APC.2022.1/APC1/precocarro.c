#include <stdio.h>

int main() {
  // Declare as variaveis que eu vou utilizar.
  double final;
  int profit, taxes;

  // Pegue os valores para o custo do carro, a taxa de lucro e os impostos.
  scanf("%lf", &final);
  scanf("%d %d", &profit, &taxes);

  // Calcule o preço de fabrica.
  const double factory = final / ( 1 + ( (float)profit * 0.01 ) + ( (float)taxes * 0.01 ) );

  // E printe-o.
  printf("%lf\n", factory);

  return 0;
}
