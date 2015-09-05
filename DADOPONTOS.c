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
#include "DADO.H"  
#include "GERAALT.H"

#define DADO_OWN
#include "DADOPONTOS.h"
#undef DADO_OWN

/***********************************************************************
*
*  $TC Tipo de dados: DADPnt Descritor do dados de ponto.
*
*  $ED Descri��o do tipo
*		Descreve a estrutura do dados ponto
***********************************************************************/

   typedef struct tgDadoPontos {
		int valor;
		/*Valor atual do dado de pontos*/
		struct Jogador * Jogador;
		/*Ponteiro para o jogador que pode usar o dado
		*$EED Assertivas Estruturais
		*	� NULL se o jogo esta no come�o e ninguem fez nenhuma dobra */

		
   } tpDadoPontos ;

/*****  Dados encapsulados no m�dulo  *****/


/*****  C�digo das fun��es exportadas pelo m�dulo  *****/

/***************************************************************************
*
*  Fun��o: DADPnt Criar Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_CriarDado(tppDadoPontos * Dado)
{
	tpDadoPontos * DadoNovo = (tpDadoPontos*)malloc(sizeof(tpDadoPontos));
	DadoNovo->valor = 2;
	/*Valor Inicial do Dado de Pontos*/
	DadoNovo->Jogador = NULL;
	/*Quando o dado � criado, todos os jogadores podem usa-lo o inicio*/
	return  DADPnt_CondRetOK;
}
/***************************************************************************
*
*  Fun��o: DADPnt Dobrar Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_DobrarDado(tppDadoPontos Dado);

/***************************************************************************
*
*  Fun��o: DADPnt Mudar "Dono" do Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_MudDono(tppDadoPontos Dado);

/***************************************************************************
*
*  Fun��o: DADPnt Destruir Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_DestruirDado(tppDadoPontos Dado);

/*********** Fim do m�dulo de implementa��o: M�dulo DadoPontos **************/
