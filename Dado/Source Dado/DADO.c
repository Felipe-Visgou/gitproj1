/***************************************************************************
*  $MCI M�dulo de implementa��o: Gerador de numeroes aleatorios restrito ao
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
*			fvc - Felipe Vieira C�rtes
*			tbm - T�ssio Borges de Miranda
*			db  - Daniela Braz�o
*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*	  1.0     tbm   02/set/2015	In�cio do desenvolvimento
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
*  Fun��o: DAD & gerar o numero de casas que devem ser puladas com 1 dado
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
}/*Fim da fun��o DAD_NumPular */

/* Fun��o usada pelo m�dulo */
int dadorand(void)
{
	int dado;
	srand( 3141592653 |(unsigned)time(NULL));

	return rand()%6+1;
}
/*********** Fim do m�dulo de implementa��o: M�dulo Dado **************/







