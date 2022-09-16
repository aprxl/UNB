#include <stdio.h>

#define MAX_SIZE 240

struct tipoLogradouro {
  char tipo[80];
  char nome[80];
  char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[MAX_SIZE]) {
  snprintf(linha, MAX_SIZE, "%s;%s;%s", info.tipo, info.nome, info.complemento);
}

#ifdef ALLOW_MAIN
int main() {
  char l[SIZE];
  struct tipoLogradouro t = {"Rua", "Sta", "21389"};

  criaLinhaCSV(t, l);

  printf("%s\n", l);
  return 0;
}
#endif
