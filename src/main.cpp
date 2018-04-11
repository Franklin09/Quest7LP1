#include "jogador.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


int main(){
	/*instancia os jogadores*/
	Jogador * alice = new Jogador("Alice");
	Jogador * bob = new Jogador("Bob");
	Jogador * carl = new Jogador("Carl");
	
	/*jogadores lanca os dados*/
	alice->jogarDados();
	bob->jogarDados();
	carl->jogarDados();
	
	/*sao adicionados a um vector para facilitar o resultado*/
	std::vector <Jogador*> j;
	j.push_back(alice);
	j.push_back(bob);
	j.push_back(carl);
	
	/*ordena crescente pelo valor agregado*/
	std::sort(j.begin(), j.end(), Jogador::myFunction);

	/*imprimi, primeira posicao esta o menor valor, visto que a funcao sort ordenou crescente*/
	std::cout << "\nVENCEDOR foi " << j[0]->getNome() << "! agregou " << j[0]->getValorAcumulado() << " pontos! "  << std::endl <<std::endl;
	std::cout << j[1]->getNome() << " agregou " << j[1]->getValorAcumulado() << " pontos! "  << std::endl;
	std::cout << j[2]->getNome() << " agregou " << j[2]->getValorAcumulado() << " pontos! "  << std::endl;
		
	return 0;
}


