#include <stdio.h>

#define SEGUNDO_PRA_HORA 3600

double calculaVelocidadeMedia(int tA, int tB, double distancia) {
  double tempo = ( tB - tA ) / (float)SEGUNDO_PRA_HORA;
  return distancia / tempo;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {
  double velocidadeMedia = calculaVelocidadeMedia(tA, tB, distancia);
  return velocidadeMedia > velocidadeMaxima;
}
