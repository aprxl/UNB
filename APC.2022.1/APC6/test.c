#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  int media = 0;
  for (int i = 0; i < n; i++) {
    int numero = v[i];

    media = media + numero;
  }

  media = media / n;

  int achou = 0;

  for (int i = 0; i < n; i++) {
    int numero = v[i];

      if (numero > media){
      printf("%d ", numero);
      achou = 1;
    }
  }

  if (achou == 0){
    printf("%d", 0);
  }

  printf("\n");
  return 0;
}
