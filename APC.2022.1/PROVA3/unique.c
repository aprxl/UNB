#include <stdio.h>

int qtdNumerosUnicos(int v[10000], int qtd) {
  int res = 1;
  for (int i = 0; i < qtd - 1; ++i)
    if (v[i] != v[i+1])
      res++;
  return res;
}
