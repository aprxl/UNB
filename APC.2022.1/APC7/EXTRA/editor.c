#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
  int n;
  int c, l;
  char o;

  scanf("%d\n", &n);

  char strings[n][MAX_LEN];

  for (int i = 0; i < n; i++)
    if (fgets(strings[i], sizeof(strings[i]), stdin) != NULL)
      if (strchr(strings[i], '\n') != NULL)
        strings[i][strcspn(strings[i], "\n")] = '\0';

  scanf("%d %d", &l, &c);

  l -= 1;
  c -= 1;

  while (scanf(" %c", &o) != EOF) {
    if (o != 'k' && o != 'j')
      continue;

    else if (o == 'k')
      l = l <= 0 ? 0 : l - 1;

    else if (o == 'j')
      l = l >= n - 1 ? n - 1 : l + 1;

    int fc = c;
    int len = strlen(strings[l]);

    if (c >= len)
      fc = len - 1;

    printf("%d %d %c\n", l + 1, fc + 1, strings[l][fc]);
  }
  return 0;
}
