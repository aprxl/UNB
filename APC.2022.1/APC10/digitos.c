#include <stdio.h>
#include <string.h>
#include <math.h>

int encaixa(int a, int b) {
  if (a == b)
    return 1;
  
  char ba[11];
  char bb[11];

  snprintf(ba, sizeof(ba), "%d", a);
  snprintf(bb, sizeof(bb), "%d", b);
  
  return strcmp(bb, ba + strlen(ba) - strlen(bb)) == 0;
}

int segmento(int a, int b) {
  if (a == b)
    return 1;
  
  char ba[11];
  char bb[11];

  snprintf(ba, sizeof(ba), "%d", a);
  snprintf(bb, sizeof(bb), "%d", b);

  if ((int)log10(a) + 1 > (int)log10(b) + 1)
    return strstr(ba, bb) != NULL;
  else
    return strstr(bb, ba) != NULL;
}

#ifdef ALLOW_MAIN
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", encaixa(a, b));
  return 0;
}
#endif
