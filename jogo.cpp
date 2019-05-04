#include <vector>
#include <ctime>
#include <string>
#include "jogador.h"
#include "d.h"
#include "jogo.h"
using namespace std;

Jogo::Jogo(){
    void jogar();
}

int Jogo::explodido(vector<Jogador> jogadores, int indice){
    int tirar;
    tirar = jogadores[indice].getPontos();
    jogadores[indice].setPontos(-tirar);
    jogadores[indice].setStatus("explodido");
    indice +=1;
    return indice;
}


int Jogo::verificarPontuacao(vector<Jogador> jogadores, int quantidade){
    int maior = (jogadores[0].getPontos());
    for(int j = 0; j < quantidade; j++){
        if ((jogadores[j].getPontos()) > maior){
            maior = jogadores[j].getPontos();
        }
    }
    return maior;
}

void jogar(vector<Jogador> jogadores){
    Jogo novo;
    int quantidade, valor, maiorPontuacao;
    int indice = 0, explodidos = 0;
    string nome;
    string ativo = "ativo";
    char escolha = 'c';
    srand(time(static_cast<unsigned>(0)));
    D dado;
    //adicionar jogadores
    cout << "Digite quantidade de jogadores: ";
    cin >> quantidade;
    for(int i = 0; i < quantidade; i++){
        cout << "Digite nome do jogador: ";
        cin >> nome;
        jogadores.push_back(Jogador(nome, 0, "ativo"));
    }
    //valor estipulado para o jogo
    cout << "valor estipulado para o jogo: ";
    cin >> valor;
    //partida
    srand(time(static_cast<unsigned>(0)));
    do{
        //se o jogador estiver ativo
        if (jogadores[indice].getStatus() == ativo){
            cout << "\n" << jogadores[indice].getNome();
            jogadores[indice].setPontos(dado.jogarD());
            cout << "pontuação acumulada: " << jogadores[indice].getPontos() << "\n";
            // se o jogador passar do valor estipulado
            if ((jogadores[indice].getPontos()) > valor){
                novo.explodido(jogadores, indice);
                explodidos += 1;
            }
            // se o jogador não passar do valor estibulado
            else{
                cout << "\nparar ou continuar (p/c)? ";
                cin >> escolha;
                // se o jogador escolher parar
                if(escolha == 'p'){
                    jogadores[indice].setStatus("inativo");
                    indice += 1;
                }
            }
        }
    }while(indice < quantidade);
    // verificar se houve ganhadores
    if (explodidos == quantidade){
       cout << "não houve ganhadores \n";
    }else{
        maiorPontuacao = novo.verificarPontuacao(jogadores, quantidade);
        for (int j = 0; j < quantidade; j++){
            if (maiorPontuacao == jogadores[j].getPontos()){
                cout << "\nganhador : " << jogadores[j].getNome() << "\n";
                cout << "pontuação : " << jogadores[j].getPontos() << "\n";
            }
        }   
    }
}