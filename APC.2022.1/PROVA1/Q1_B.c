#include <stdio.h>

int main() {
  int consumo, total = 7;

  scanf("%d", &consumo);

  if (consumo <= 10) {
    printf("%d\n", total);
  }

  else {
    int consumo_30 = consumo - 10;
    int consumo_100 = consumo - 30;
    int consumo_max = consumo - 100;

    if (consumo_30 > 0) {
      total += consumo_30 * 1;
    }

    if (consumo_100 > 0) {
      total += consumo_100 * 2;
    }

    if (consumo_max > 0) {
      total += consumo_max * 5;
    }

    printf("%d\n", total);
  }
  return 0;
}
