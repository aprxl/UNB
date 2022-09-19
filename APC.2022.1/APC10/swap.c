#include <stdio.h>

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

#ifdef ALLOW_MAIN
int main() {
  int a = 0;
  int b = 5;

  swap(&a, &b);

  printf("%d %d\n", a, b);
  return 0;
}
#endif
