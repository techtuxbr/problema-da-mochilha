//============================================================================
// Name        : problemadamochilha.cpp
// Author      : Victor Lima
// Version     :
// Copyright   : MIT
// Description : Resolvendo o problema da mochilha em C++
//============================================================================

#include <iostream>
#include "./includes/genetico.h"
using namespace std;


int main() {

	cout << CruzamentoPontoUnico(60504,25000) << endl;
	cout << CruzamentoAritimetico(12329, 38054) << endl;
	cout << MutacaoSimples(1259) << endl;
	cout << MutacaoDupla(732) << endl;

	return 0;
}
