#ifndef DADO_H
#define DADO_H

#include <random>

class Dado{
	
private:
	int m_valor;
	std::random_device 			m_rd; 
	std::default_random_engine 		m_gen; 
	std::uniform_int_distribution<> 	m_dis;
	
public:
	Dado(const int lados);
	~Dado();

	int getValor();
	void jogar();
	
};

#endif
