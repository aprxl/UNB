#include <stdio.h>

int main() {
  // Declare as variaveis que eu vou utilizar.
  double factory;
  int profit, taxes;

  // Pegue os valores para o custo de fábrica, a taxa de lucro e os impostos.
  scanf("%lf", &factory);
  scanf("%d %d", &profit, &taxes);

  // Calcule o preço final.
  const double price = factory + ( factory * ( (float)profit * 0.01 ) ) + ( factory * ( (float)taxes * 0.01 ) );

  // E printe-o.
  printf("%.2lf\n", price);

  return 0;
}
