#include <stdio.h>

#define MAX_LEN 81

typedef int bool;

int slen(char* str) {
  int len = 0;
  
  while (*str != '\0') {
    len++;
    str++;
  }

  return len;
}

bool eq(char* a, char* b) {
  if (slen(a) != slen(b)) {
    return 0;
  }

  while (*a != '\0' || *b != '\0') {
    if (*a != *b) {
      return 0;
    }

    a++;
    b++;
  }

  return 1;
}

int main() {
  int n, m;

  scanf("%d %d\n", &n, &m);

  char S[n][MAX_LEN];
  char P[m][MAX_LEN];

  for (int i = 0; i < n; i++) {
    char* buf = S[i];

    scanf(" %s", buf);
  }

  for (int i = 0; i < m; i++) {
    char* buf = P[i];

    scanf(" %s", buf);
  }

  for (int i = 0; i < m; i++) {
    char* cur_p = P[i];

    for (int j = 0; j < n; j++) {
      char* cur_s = S[j];

      if (eq(cur_s, cur_p)) {
        printf("1\n");
        return 0;
      }
    }
  }

  printf("0\n");
  return 0;
}
