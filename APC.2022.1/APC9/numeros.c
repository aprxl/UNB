#include <stdio.h>
#include <math.h>
#include <memory.h>

struct tipoData {
  int dia, mes, ano;
};

struct tipoPessoa {
  char nome[80];
  struct tipoData dtNascimento;
};

int getDigits(int number, int from, int to) {
  return number / (int)pow(10, from - (from - to)) % (int)pow(10, from - to);
}

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento) {
  struct tipoPessoa p;

  memcpy(p.nome, nome, sizeof(p.nome));
  
  p.dtNascimento.ano = getDigits(dt_nascimento, 8, 4);
  p.dtNascimento.mes = getDigits(dt_nascimento, 4, 2);
  p.dtNascimento.dia = getDigits(dt_nascimento, 2, 0);

  return p;
}

#ifdef ALLOW_MAIN
int main() {
  __auto_type p = separaInfo("Fernando Souza", 20030907);
  printf("Name: %s, Date: %d/%02d/%02d", p.nome, p.dtNascimento.ano, p.dtNascimento.mes, p.dtNascimento.dia);
  return 0;
}
#endif
