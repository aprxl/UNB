#include <stdio.h>
#include <string.h>

int main() {
  char buffer[4];
  
  int i = 0;
  int sims = 0;
  int res = 0;

  while (scanf("%s ", buffer) != EOF) {
    if (strcmp(buffer, "sim") == 0)
      sims++;

    if (++i >= 10) {
      if (sims >= 2)
        res++;

      i = 0, sims = 0;
    }
  }
  
  printf("%d\n", res);
  return 0;
}
