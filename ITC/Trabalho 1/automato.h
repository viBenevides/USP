//Trabalho 1 de Introducao a teoria da computacao SCC0505;
//Victor Benevides 8531491;

//Struct do Simbolo;
//Essa struct possui o simbolo da cadeia e para qual estado ela vai ser consumida;
typedef struct Simbolo{
	char simbolo_cadeia;
	int estado_cadeia;
}Simbolo;

//Struct do Estado;
//Essa struct possui o numero do estado e para qual estado passa a cadeia;
typedef struct Estado{
	int numero_estado;
	Simbolo *simbolo_estado;
}Estado;

//Struct do Automato;
//Essa struct possui o estado de inicio e os estados de aceitacao;
typedef struct Automato{
	Estado *inicio;
	Estado *aceitacao;
}Automato;

//Cabecalho das funcoes de automato;
Automato *cria();
int set_Inicio(Automato *afd, Estado *inicio);
int set_Aceitacao(Automato *afd, Estado *aceitacao);

//Cabecalho das funcoes do estado;
Estado *cria();
void set_Estado(Automato *afd, Estado *estado);

//Cabecalho das funcoes do simbolo;


//Cabecalho das funcoes de verificacao da cadeia;
