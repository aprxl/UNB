#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int main() {
  int len;

  char name[MAX_LEN];
  char first[MAX_LEN];
  char last[MAX_LEN];

  if (fgets(name, MAX_LEN+1, stdin) != NULL) {
    len = strlen(name);
    name[len - 1] = '\0';
  }

  for (const char* p = name; *p != ' '; p++)
    first[p-name] = *p;

  first[strlen(first) - 1] = '\0';

  for (const char* p = name + strlen(name); *p != ' '; p--)
    printf("%lld: %c\n", name-p, *p);

  last[strlen(last) - 1] = '\0';

  printf("%s %s\n", first, last);
  return 0;
}
