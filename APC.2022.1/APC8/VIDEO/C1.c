#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int main() {
  int n;

  scanf("%d", &n);

  char strings[n][MAX_LEN];

  for (int i = 0; i < n; i++) {
    scanf("%s", strings[i]);
    strings[i][strlen(strings[i])] = '\0';
  }

  int maior_tamanho = 1;

  for (int i = 0; i < n; i++) {
    size_t len = strlen(strings[i]);
    if (len > maior_tamanho) {
      maior_tamanho = len;
    }
  }

  printf("%d\n", maior_tamanho);
  return 0;
}
