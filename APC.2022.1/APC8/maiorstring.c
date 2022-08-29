#include <stdio.h>

#define MAX_LEN 101

int slen(char* str) {
  int len = 0;

  while (*str != '\0') {
    str++;
    len++;
  }

  return len;
}

int main() {
  int n;

  scanf("%d\n", &n);
  
  char strings[n][MAX_LEN];

  for (int i = 0; i < n; i++)
    scanf("%s", strings[i]);

  int greatest_length = 0;

  for (int i = 0; i < n; i++) {
    const int len = slen(strings[i]);

    if (len > greatest_length) {
      greatest_length = len;
    }
  }

  printf("%d\n", greatest_length);
  return 0;
}
