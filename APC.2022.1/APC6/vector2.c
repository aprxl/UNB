#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int x[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &x[i]);

  int idx = -1, lowest = INT_MAX;

  for (int i = 0; i < n; i++) {
    const int current = x[i];
        
    if (lowest > current) {
      lowest = current;
      idx = i;
    }
  }

  printf("%d\n", idx);
}
