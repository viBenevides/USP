//Trabalho 1 de Introducao a Teoria da Computacao
//Autor: Victor Benevides 8531491
#include <stdio.h>
#include <stdlib.h>
#include "automato.h"

Automato *cria(){
	Automato *aux;
	
	aux = (Automato *) malloc (sizeof(Automato));
	if(!aux)
		printf("Erro ao alocar Automato");
	
	return aux;
}
