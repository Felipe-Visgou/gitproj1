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
#include "DADO.H"  
#include "GERAALT.H"

#define DADO_OWN
#include "DADO.h"
#undef DADO_OWN

/***************************************************************************
*
*  Função: DAD & gerar o numero de casas que devem ser puladas com 1 dado
*  ****/

DAD_tpCondRet DAD_NumPular(void*, int *NumeroCasas)
{
	unsigned int i = 1;
	int DadoInicio = 1;
	int DadoFim = 6;
	int *NumeroCasasPular;

	ALT_Inicializar( i );
	NumeroCasasPular = (int*)ALT_GerarDistUniforme( DadoInicio, DadoFim );
	NumeroCasas = NumeroCasasPular;

	return DAD_CondRetOK;
}/*Fim da função DAD_NumPular */


/*********** Fim do módulo de implementação: Módulo Dado **************/







