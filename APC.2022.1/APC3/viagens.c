#include <stdio.h>
#include <limits.h>

int main() {
  int n, day = 1;

  while (scanf("%d", &n) != EOF) {
    int best_code = INT_MAX, best_rating = 0;

    for (int i = 0; i < n; i++) {
      int code, rating;

      scanf("%d %d", &code, &rating);
      
      if (best_rating < rating) {
        best_rating = rating;
        best_code = code;
      }

      else if (best_rating == rating && best_code > code) {
        best_code = code;
      }
    }

    printf("Dia %d\n%d\n", day, best_code);

    day++;
  }

  return 0;
}
