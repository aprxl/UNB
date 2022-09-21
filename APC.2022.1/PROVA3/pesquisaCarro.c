#include <stdio.h>
#include <string.h>

struct produto {
  char marca[80];
  char modelo[80];
  int quantidade;
};

int pesquisarMarca(char marca[80], struct produto estoque[50], int n) {
  int total = 0;
  for (int i = 0; i < n; ++i) {
    if (strcmp(estoque[i].marca, marca) == 0) {
      printf("%s %d\n", estoque[i].modelo, estoque[i].quantidade);
      total += estoque[i].quantidade;
    }
  }
  return total;
}
