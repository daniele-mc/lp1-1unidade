#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>
#include <cstdlib>
#include <vector>
#include "d.h"
using namespace std;

class Jogador{
 private:
   int pontos;
   string nome ;
   D *dados = new D(6,6) ; 
   string status;
   
 public:
   int getPontos();
   void setPontos(int pontos);
   string getNome();
   void setNome(string nome);
   string getStatus();
   void setStatus(string status);
   Jogador();
   Jogador(string nome, int pontos, string status);
   void jogarDados();
};

#endif

