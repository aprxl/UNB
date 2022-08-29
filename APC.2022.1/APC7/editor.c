#include <stdio.h>
#include <string.h>

// Max string length is 1000 chars.
#define MAX_LEN 1001

// A few functions because I wasn't sure if math.h's ones were working.
int max(int x, int y) {
  return x > y ? x : y;
}

int min(int x, int y) {
  return x > y ? y : x;
}

int clamp(int v, int _min, int _max) {
  return max(min(v, _max), _min);
}

int main() {
  int n;
  int line, position;
  char e;

  scanf("%d\n", &n);

  char lines[n][MAX_LEN];

  for (int i = 0; i < n; i++)
    if (fgets(lines[i], MAX_LEN, stdin) != NULL)
      lines[i][strcspn(lines[i], "\n")] = '\0';

  scanf("%d %d\n", &line, &position);

  // Fix indexes.
  line -= 1;
  position -= 1;

  while (scanf(" %c", &e) != EOF) {
    // Event isn't valid.
    if (e != 'k' && e != 'j') {
      continue;
    }

    int fixed_position = position;

    line = clamp(e == 'k' ? --line : ++line, 0, n - 1);

    const int len = strlen(lines[line]);

    // Char is out of bounds. Clamp it down.
    if (position >= len) {
      fixed_position = clamp(position, 0, len - 1);
    }

    // Print result.
    printf("%d %d %c\n", line + 1, fixed_position + 1, lines[line][fixed_position]);
  }

  return 0;
}
