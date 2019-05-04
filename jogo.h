#ifndef JOGO_H
#define JOGO_H
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "jogador.h"
#include "d.h"

class Jogo{
 private:
    vector<Jogador> jogadores;

 public:
    Jogo();
    int verificarPontuacao(vector<Jogador> jogadores, int quantidade);
    int explodido(vector<Jogador> jogadores, int indice);;
};
#endif