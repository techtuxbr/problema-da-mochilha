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

	unsigned short int MutacaoSimples(unsigned short int solucao){

		if(TestarBit(solucao,9)){
			return DesligaBit(solucao,9);
		}else{
			return LigaBit(solucao,9);
		}
	}

	unsigned short int MutacaoDupla(unsigned short int solucao){

		if(TestarBit(solucao,3)){
			solucao = DesligaBit(solucao, 3);
		}else{
			solucao = LigaBit(solucao, 3);
		}

		if(TestarBit(solucao,12)){
			solucao = DesligaBit(solucao, 12);
		}else{
			solucao = LigaBit(solucao, 12);
		}

		return solucao;

	}

