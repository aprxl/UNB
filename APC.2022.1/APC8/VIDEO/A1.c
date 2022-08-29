#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
  char buffer[MAX_LEN];

  scanf("%s", buffer);

  printf("%zd\n", strlen(buffer));
  return 0;
}
