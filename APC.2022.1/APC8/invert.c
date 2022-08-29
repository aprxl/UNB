#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
  char buffer[MAX_LEN];

  scanf("%s", buffer);

  const char* p = buffer + strlen(buffer);

  while (p-- > buffer) {
    printf("%c", *p);
  }

  return 0;
}
