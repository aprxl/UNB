#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
  char buffer[MAX_LEN];

  scanf("%s", buffer);

  int len = strlen(buffer);

  buffer[len] = '\0';

  for (int i = len - 1; i >= 0; i--)
    printf("%c", buffer[i]);

  printf("\n");
  return 0;
}
