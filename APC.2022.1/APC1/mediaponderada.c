#include <stdio.h>

int main() {
  // Declare as variaveis que vao ser utilizadas.
  double xm, x2;
  int w1, w2;

  // Pegue o valor da media aritmetica, do segundo 'x' e dos pesos.
  scanf("%lf", &xm);
  scanf("%lf", &x2);
  scanf("%d %d", &w1, &w2);

  // Compute o valor de 'x_1'.
  const double x1 = (xm * ( w1 + w2 ) - (w2 * x2)) / w1;

  // Printe o valor de 'x_1'.
  printf("%lf\n", x1);
  return 0;
}
