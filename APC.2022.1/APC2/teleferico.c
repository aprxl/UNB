#include <stdio.h>

int main() {
   // Declare os inteiros que vamos utilizar.
   int capacity, students, trips = 0;

   // E pegue os valores dados pelo usuário.
   scanf("%d\n%d", &capacity, &students);

   // Faça um while loop que rode enquanto nosso número de alunos não for nulo.
   while (students > 0) {
      // Decremente a quantia de estudantes de acordo com quantos alunos podem ir em cada viagem.
      // A capacidade de alunos sempre vai ser igual a capacidade total menos um, pois cada viagem
      // Possui um monitor.
      students -= capacity - 1;

      // Nós acabamos a nossa 'viagem', então incrementamos a quantia de viagens.
      trips++;
   }

   // E printe o resultado.
   printf("%d\n", trips);
   return 0;
}