#include <stdio.h>
#include <string.h>

struct tipoMusica {
  char nome[80];
  int ano;
};

struct tipoBanda {
  char nome[80];
  int qtd;
  struct tipoMusica musicas[100];
};

void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n) {
  int found = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < bandas[i].qtd; j++) {
      if (strcmp(pesquisa, bandas[i].musicas[j].nome) == 0) {
        found++;
        printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
        break;
      }
    }
  }
  
  if (!found)
    printf("Musica nao cadastrada\n");
}

#ifdef ALLOW_MAIN
int main() {
  struct tipoBanda bandas[1] = {
    {
      "Black Sabbath",
      3,
      {{"123456", 840}, {"Hello world!", 1881}, {"Mega", 2137}}
    }
  };

  pesquisarNomeMusica("Haha", bandas, 1);
  return 0;
}
#endif
