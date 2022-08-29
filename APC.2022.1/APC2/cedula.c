#include <stdio.h>

int main() {
   // Salve o valor da metade da área da cédula.
   // A área da cédula é 70 * 160, ou seja, 11200.
   const float half = 11200 / 2;

   // Declaramos as variaveis que vamos utilizar.
   int b, t;

   // Pegamos o valor de B e T.
   scanf("%d\n%d", &b, &t);

   // Vamos resolver o problema para Eduardo. Ou seja, calculamos primeiro
   // A área da sua parte da cédula. Podemos afirmar que o formato da cédula cortada
   // é de um trapézio.
   const float trap = ( b + t ) * 70 / 2;

   // Se a metade de Eduardo tiver área maior do que a metade da área da cédula
   // Então, ele ficará com os 100 reais.
   if (trap > half) {
      printf("1\n");
   }

   // Caso a metade de Eduardo seja menor, Daiane ficará com os 100 reais.
   else if (trap < half) {
      printf("2\n");
   }

   // Caso contrário, a cédula foi cortada exatamente no meio dela, então
   // nenhum dos dois ficará com os 100 reais.
   else {
      printf("0\n");
   }

   return 0;
}