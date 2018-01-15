/*
 * binario.cpp
 *
 *  Criado em: 14 de jan de 2018
 *      Autor: victor
 */

#include "./includes/binario.h"


unsigned short int LigaBit(unsigned short int numero, int bit){
	return numero | (1 << bit);
}

unsigned short int DesligaBit(unsigned short int numero, int bit){
	return numero & ~(1 << bit);
}

bool TestarBit(unsigned short int numero, int bit){
	if (numero & (1 << bit)){
		return true;
	}else{
		return false;
	}
}

unsigned short int BitsAltos(unsigned short int numero){

	unsigned int mascara = 0xFF00;

	numero = numero & mascara;

	return numero >> 8;

}

unsigned short int BitsBaixos(unsigned short int numero){

	return numero & ((1 << 8) - 1);
}

unsigned short int AndBinario(unsigned short int numero1, unsigned short int numero2){

	return numero1 & numero2;

}

unsigned short int OrBinario(unsigned short int numero1, unsigned short int numero2){
	return numero1 & numero2;
}

