#include <stdio.h>

int main() {
  // Crie apenas uma váriavel que será utilizada para determinar o tamanho da pirâmide.
  int n;

  // Pegamos o tamanho da pirâmide que o usuário especificará.
  scanf("%d", &n);

  // Fazemos um for loop que repetirá 'n' vezes. A diferença desse for para os outros
  // que fizemos antes é que ele começa no número 1, não 0. Portanto, a condição do for
  // será 'i <= n', não 'i < n'. 
  for (int i = 1; i <= n; i++) {

    // Dentro do nosso for, teremos outro loop. Dessa vez, iremos repetir o for `i` vezes.
    // Isso é porque queremos repetir o número 'i' um número 'i' de vezes. Por exemplo,
    // repetiremos o número '03' três vezes.
    for (int j = 0; j < i; j++) {
      // Caso `j` seja maior do que zero, isso significa que já printamos um número antes nessa linha,
      // ou seja, precisamos adicionar um espaço entre esse número e o último.
      if (j > 0)
        printf(" ");
      
      // Caso `i`, ou seja, o número que estamos printando seja menor do que 10, adicionamos um '0' antes.
      // Por exemplo, o número '3' virará '03'.
      if (i < 10)
        printf("0%d", i);

      // Caso contrário, apenas printe o número.
      else
        printf("%d", i);
    }
    
    // Já printamos todos os números dessa linha, então pulamos para a próxima linha.
    printf("\n");
  }

  // O exercício pediu para separarmos cada pirâmide por uma linha.
  printf("\n");

  // Fazemos novamente um loop.
  for (int i = 1; i <= n; i++) {

    // Dentro do nosso for, teremos outro loop. Dessa vez, iremos repetir o for `i` vezes.
    // Isso é porque queremos printar todos os números de '1' até 'i', incluindo o `i`. Por exemplo,
    // quando 'j' for igual à três, printaremos '01 02 03'.
    for (int j = 1; j <= i; j++) {
      // Caso `j` seja maior do que um, isso significa que já printamos um número antes nessa linha,
      // ou seja, precisamos adicionar um espaço entre esse número e o último.
      if (j > 1)
        printf(" ");
      
      // Caso `j`, ou seja, o número que estamos printando seja menor do que 10, adicionamos um '0' antes.
      // Por exemplo, o número '3' virará '03'.
      //
      // A maior diferença entre esse for e o último é que aqui estamos printando 'j', enquanto lá em cima 
      // estamos printando 'i'.
      if (j < 10)
        printf("0%d", j);

      // Caso contrário, apenas printe o número (j).
      else
        printf("%d", j);
    }
    
    // Aqui jà terminamos de printar os números dessa linha, então pulamos para a próxima linha.
    printf("\n");
  }
 

  return 0;
}
