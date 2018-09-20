/*
 * INIZATOR v.Git
 * por Xalalau Xubilozo
 * https://github.com/xalalau/Xalateca/tree/master/C/Inizator
 * Licença: MIT
 * */

#ifndef INIZATOR_H
#define INIZATOR_H

	#define MAX_CHAR_SECAO 40
	#define MAX_CHAR_PARAMETRO_NOME 50
	#define MAX_CHAR_PARAMETRO_VALOR 700

	// Nó = Bloco de informação para uma entrada do arquivo .ini
	typedef struct no_ {
		char secao[MAX_CHAR_SECAO];
		char parametro[MAX_CHAR_PARAMETRO_NOME];
		char valor[MAX_CHAR_PARAMETRO_VALOR];
		struct no_* proxima_secao;
		struct no_* proximo_parametro;
	} no;

	// [Classe] Exposição das funções necessárias para os usuários
	struct Inizator {
		no* (*ler)(char arquivo[]);
		void (*imprimir)(no* inicio, char secao[]);
		char* (*buscar)(no* inicio, char secao[], char termo[]);
		int (*alterar)(no* inicio, char secao[], char parametro[], char novo_valor[]);
		int (*inserir)(no* inicio, char secao[], char parametro[], char valor[]);
		int (*limpar)(no* no_atual);
	} ini;

#endif //INIZATOR_H
