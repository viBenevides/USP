//Trabalho 1 de Introducao a teoria da computacao SCC0505;
//Victor Benevides 8531491;

typedef struct Automato{
	Estado *inicio;
	Estado *aceitacao;
}Automato;

typedef struct Estado{
	int numero_estado;
	Simbolo *simbolo_estado;
}Estado;

typedef struct Simbolo{
	char simbolo_cadeia;
	Estado *estado_cadeia;
}Simbolo;
