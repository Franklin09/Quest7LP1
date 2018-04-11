#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>

class Jogador{
	
private:
	std::string nome;
	int valorAcumulado;
	
public:
	Jogador(std::string nome_);
	~Jogador();	
	
	int getValorAcumulado();
	void jogarDados(); 
	std::string getNome();	
	static bool myFunction(const Jogador * j1,const Jogador * j2);	
};

#endif
