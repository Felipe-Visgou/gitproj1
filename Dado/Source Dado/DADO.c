/***************************************************************************
*  $MCI Módulo de implementação: Gerador de numeroes aleatorios restrito ao
*								 numero de faces 
*
*  Arquivo gerado:              DADO.c
*  Letras identificadoras:      DAD
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: avs - Arndt von Staa
*			fvc - Felipe Vieira Côrtes
*			tbm - Tássio Borges de Miranda
*			db  - Daniela Brazão
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
*	  1.0     tbm   02/set/2015	Início do desenvolvimento
*
***************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "GERAALT.H"

#define DADO_OWN
#include "DADO.h"
#undef DADO_OWN
#define RAN_MAX 0x7fff

/***************************************************************************
*
*  Função: DAD & gerar o numero de casas que devem ser puladas com 1 dado
*  ****/


/* Funcao do Modulo */
int dadorand(void);


/* fim funcao do modulo */

DAD_tpCondRet DAD_NumPular(int *NumeroCasas)
{
	unsigned int i = 1;
	int DadoInicio = 1;
	int DadoFim = 6;

	//ALT_Inicializar( i );
	*NumeroCasas = dadorand();

	return DAD_CondRetOK;
}/*Fim da função DAD_NumPular */

/* Função usada pelo módulo */
int dadorand(void)
{
	int dado;
	srand( 3141592653 |(unsigned)time(NULL));

	return rand()%6+1;
}
/*********** Fim do módulo de implementação: Módulo Dado **************/







