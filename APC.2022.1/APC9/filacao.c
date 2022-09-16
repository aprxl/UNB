#include <stdio.h>
#include <memory.h>

struct tipoFiliacao {
  char nome[80];
  char nomeMae[80];
  char nomePai[80];
};

char* chr(char* p, char c) {
  while (*p != c && *p != '\0')
    p++;

  return *p == c ? p : NULL;
}

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
  struct tipoFiliacao t;

  char* first = chr(linha, ',');
  char* second = chr(first + 1, ',');
  char* third = chr(second + 1, '\0');

  memset(t.nome, 0, sizeof(t.nome));
  memset(t.nomeMae, 0, sizeof(t.nomeMae));
  memset(t.nomePai, 0, sizeof(t.nomePai));

  memcpy(t.nome, linha, first - linha);
  memcpy(t.nomeMae, first + 1, second - first - 1);
  memcpy(t.nomePai, second + 1, third - second - 1);

  return t;
}

#ifdef ALLOW_MAIN
int main() {
  struct tipoFiliacao fil = separaLinhaCSV(",Adriana da Silva,");

  printf("Name: %s\nMother: %s\nFather: %s\n", fil.nome, fil.nomeMae, fil.nomePai);
  return 0;
}
#endif
