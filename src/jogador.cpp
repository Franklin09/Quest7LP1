#include "jogador.h"
#include "dado.h"
#include <iostream>
#include <string>

Jogador::Jogador(std::string nome_){
nome = nome_;
valorAcumulado =0;
}

Jogador::~Jogador(){}	

std::string Jogador::getNome(){

	return nome;

}

/*instancia os dados com a quantidade de lados, pega os valores de cada e soma */
void Jogador::jogarDados(){ 

	
	std::cout << nome << " jogou os dados..." <<std::endl;
	
	Dado * tetrahedron = new Dado(3);
	tetrahedron->jogar();
	std::cout << "Tetrahedron: " << tetrahedron->getValor() << std::endl;
	
	Dado * cube = new Dado(6);
	cube->jogar();
	std::cout << "Cube: " << cube->getValor() << std::endl;
	
	Dado * octahedron = new Dado(8);
	octahedron->jogar();
	std::cout << "Octahedron: " << octahedron->getValor() << std::endl;
	
	Dado * dodecahedron = new Dado(12);
	dodecahedron->jogar();
	std::cout << "Dodecahedron: " << dodecahedron->getValor() << std::endl;
	
	Dado * icosahedron = new Dado(20);
	icosahedron->jogar();
	std::cout << "Icosahedron: " << icosahedron->getValor() << std::endl;

	valorAcumulado = tetrahedron->getValor() + cube->getValor() + octahedron->getValor() +
			 dodecahedron->getValor() + icosahedron->getValor();
	
	std::cout << "ACUMULOU: " << valorAcumulado << " PONTOS" << std::endl;
	std::cout <<"....................................\n" <<std::endl;
}

int Jogador::getValorAcumulado(){

	return valorAcumulado;
}	

//auxiliar funcao para ordenar vector
bool Jogador::myFunction(const Jogador * j1,const Jogador * j2){ 
	return j1->valorAcumulado < j2->valorAcumulado;
}