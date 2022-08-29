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
    int num_atual = v[i];

    media = media + num_atual;
  }

  media = media / n;

  int achou = 0;

  for (int i = 0; i < n; i++) {
    int num_atual = v[i];

    if (num_atual > media) {
      printf("%d ", num_atual);

      achou = 1;
    }
  }

  if (achou == 0) {
    printf("0");
  }
 
  printf("\n");
  return 0;
}
