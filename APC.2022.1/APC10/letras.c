#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
  char buffer[MAX_LEN];
  char p;

  scanf("%c\n", &p);
  fgets(buffer, sizeof(buffer), stdin);
  
  int words = 0;
  int appear = 0;
  int has_found = 0;

  char* ptr = buffer;

  while (*ptr != '\0') {
    if (*ptr == ' ')
      words++, has_found = 0;
    
    if (*ptr == p && !has_found)
      appear++, has_found = 1;
      
    ptr++;
  }

  words++;

  printf("%.1f\n", ((float)appear/words)*100);
  return 0;
}
