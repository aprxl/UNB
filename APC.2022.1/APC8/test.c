#include <stdio.h>
#include <string.h>

#define LEN 12

int main() {
  char w[LEN];

  if (fgets(w, LEN, stdin) != NULL) {
    w[strlen(w)-1] = '\0';
  }

  for (int i = 0; i <= strlen(w); i++)
    printf("%d: %c (%d)\n", i, w[i], (int)w[i]);

  return 0;
}
