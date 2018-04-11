#include "dado.h"

//construtor parametizado recebe quantidade de lados do dado
Dado::Dado(int lados):m_gen(m_rd()),m_dis(1,lados){
m_valor = 0;
}
//destroi dado
Dado::~Dado(){}

void Dado::jogar(){
	m_valor =std::round(m_dis(m_gen));
}
//joga o dado e retorna um valor
int Dado::getValor(){
	
	return m_valor;
}
