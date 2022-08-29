#include <stdio.h>

int main() {
  // Declare as variaveis que vamos utilizar.
  // Eu odeio essa linha de codigo, eu sei que eu poderia fazer de outra forma menos
  // estupida mas eu estou com preguiça :)
  float p1, p2, p3, l1, l2, l3, l4, l5, t;

  // Leia os inputs do usuário.
  scanf("%f %f %f", &p1, &p2, &p3);
  scanf("%f", &t);
  scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);

  // Calcule a soma de todos Li e divida-os por 10.
  const float ml = (l1 + l2 + l3 + l4 + l5) / 10;
  const float score = (p1 + (p2 * 2) + (p3 * 3) + (t * 2)) / 8;

  // Calcule a media final.
  const float final_score = ml + score;

  // Printe a media final
  printf("%.2f", final_score);
  return 0;
}
