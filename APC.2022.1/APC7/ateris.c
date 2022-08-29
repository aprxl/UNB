#include <stdio.h>
#include <memory.h>

typedef int bool;

bool normalize_ones(size_t n, int m[n][n]) {
  bool should_recurse = 0;

  // Remove all invalid ones.
  for (int i = 0; i < n; i++) {
    const int* row = m[i];
    bool all_ones = 1;

    // Check if row contains only ones.
    for (int j = 0; j < n; j++) {
      if (row[j] != 1) {
        all_ones = 0;
        break;
      }
    }

    // If so, set all numbers in this row to zero.
    if (all_ones) {
      memset(m[i], 0, sizeof(m[i]));
    }

    // Print array as requested.
    for (int j = 0; j < n; j++)
      printf("%d ", m[i][j]);

    printf("\n");
  }

  printf("\n");

  // Move all invalid ones.
  // I'm aware that this is unnecessarily slow, I'm just lazy.
  for (int a = 0; a < n; a++) {
    for (int i = 0; i < n; i++) {
      for (int j = n - 1; j > 0; j--) {
        const int current = m[j][i];
        const int above = m[j-1][i];

        // Check if shouldn't correct.
        if (current != 0 || above != 1) {
          continue;
        }

        m[j][i] = 1;
        m[j-1][i] = 0;
      }
    }
  }

  // Print corrected matrix and check for recurse.
  for (int i = 0; i < n; i++) {
    bool all_ones = 1;

    for (int j = 0; j < n; j++) {
      if (m[i][j] != 1) {
        all_ones = 0;
      }

      printf("%d ", m[i][j]);
    }

    if (all_ones && !should_recurse) {
      should_recurse = 1;
    }

    printf("\n");
  }

  printf("\n");

  return should_recurse;
}

int main() {
  int n;

  scanf("%d", &n);

  int m[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &m[i][j]);


  printf("\n");

  // Weird while loop.
  while (normalize_ones(n, m));

  return 0;
}
