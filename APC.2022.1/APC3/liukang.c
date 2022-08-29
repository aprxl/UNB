#include <stdio.h>
#include <math.h>

int main() {
  int hits;
  unsigned long long time;

  scanf("%llu %d", &time, &hits);

  for (int i = 0; i < hits; i++) {
    const int n = sqrtl(time);
    const int even = fmodl(time, 2) == 0;

    if (even) {
      time = powl(n - 1, 2);
    }

    else {
      time = powl(n * 2 - 1, 2);
    }

    printf("%llu\n", time);
  }

  return 0;
}
