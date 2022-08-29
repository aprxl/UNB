#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int x[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &x[i]);

  int second_lowest = INT_MAX, third_lowest = INT_MAX, lowest = INT_MAX;

  for (int i = 0; i < n; i++) {
    const int current = x[i];
        
    if (lowest > current) {
      third_lowest = second_lowest;
      second_lowest = lowest;
      lowest = current;
    }

    else if (second_lowest > lowest && second_lowest > current) {
      third_lowest = second_lowest;
      second_lowest = current;
    }

    else if (third_lowest > second_lowest && third_lowest > current) {
      third_lowest = current;
    }
  }

  printf("%d\n%d\n", second_lowest, third_lowest);
  return 0;
}
