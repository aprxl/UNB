#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 102

char *rev(char *str) {
      char *p1, *p2;

      if (! str || ! *str)
        return str;

      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }

      return str;
}

int main() {
  char name[MAX_LEN];
  char first[MAX_LEN];
  char last[MAX_LEN];

  int len;
  if (fgets(name, MAX_LEN, stdin) != NULL) {
    len = strnlen(name, MAX_LEN);
    name[len - 1] = '\0';

    len++;
  }

  for (int i = 0; i < len; i++)
    name[i] = tolower(name[i]);

  int i;
  for (i = 0; name[i] != ' '; i++)
    first[i] = name[i];

  first[i] = '\0';

  int size = strnlen(name, MAX_LEN) - 1;
  int j = 0;
  for (; name[size] != ' '; size--, j++)
    last[j] = name[size];

  last[j] = '\0';

  printf("%s.%s@unb.br\n", first, rev(last));
  return 0;
}
