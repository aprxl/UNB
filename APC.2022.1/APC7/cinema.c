#include <stdio.h>
#include <memory.h>

typedef int bool;

int main() {
  int rows, columns, temp1;
  char temp2;

  scanf("%d %d", &rows, &columns);

  bool map[rows][columns];

  memset(map, 0, sizeof(map));

  while (scanf(" %c%d", &temp2, &temp1) != EOF) {
    const int row = (int)temp2 - 'A';
    const int column = temp1 - 1;

    map[row][column] = 1;
  }

  printf("  ");

  for (int i = 0; i < columns; i++) {
    printf("%02d ", i + 1);
  }

  printf("\n");

  for (int i = rows - 1; i >= 0; i--) {
    const bool* current = map[i];
    const char row_name = (char)i + 'A';

    printf("%c ", row_name);

    for (int j = 0; j < columns; j++) {
      const bool is_taken = current[j];

      is_taken ? printf("XX ") : printf("-- ");
    }

    printf("\n");
  }
  return 0;
}
