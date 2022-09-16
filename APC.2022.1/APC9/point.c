#include <stdio.h>
#include <math.h>

struct tipoPonto {
  int x, y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb) {
  return sqrt(
    ( pb.x - pa.x ) * ( pb.x - pa.x ) +
    ( pb.y - pa.y ) * ( pb.y - pa.y )
  );
}

#ifdef ALLOW_MAIN
int main() {
  struct tipoPonto a = { 1, 2 };
  struct tipoPonto b = { 5, 5 };

  printf("%lf\n", distancia(a, b));
  return 0;
}
#endif
