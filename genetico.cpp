/*
 * genetico.cpp
 *
 *  Criado em: 16 de jan de 2018
 *      Autor: victor
 */
#include "./includes/genetico.h"
#include "./includes/binario.h"

	unsigned short int CruzamentoPontoUnico(unsigned short int solucao1, unsigned short int solucao2){
		 return (BitsAltos(solucao1)|BitsBaixos(solucao2));
	}

	unsigned short int CruzamentoAritimetico(unsigned short int solucao1, unsigned short int solucao2){
		return solucao1 & solucao2;
	}



