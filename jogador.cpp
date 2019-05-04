#include "jogador.h"
#include "d.h"

int Jogador::getPontos(){
    return this->pontos;
}
void Jogador::setPontos(int pontos){
    this->pontos += pontos;
}
string Jogador::getNome(){
    return this->nome;
}
void Jogador::setNome(string nome){
	this->nome = nome;
}
string Jogador::getStatus(){
    return this->status;
}
void Jogador::setStatus(string status){
	this->status = status;
}
Jogador::Jogador(){
    
}
Jogador::Jogador(string nome, int pontos, string status){
	this->nome = nome;
    this->pontos = pontos;
    this->status = status;
}
void Jogador::jogarDados(){
    setPontos(dados->jogarD());
}

